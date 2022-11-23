import argparse
# import the m5 (gem5) library created when gem5 is built
import m5
# import all of the SimObjects
from m5.objects import *

class Processor():

    def __init__(self) -> None:
        self.binary = None
        self.setup_arguments()
        self.system = None

    def setup_arguments(self):
        parser = argparse.ArgumentParser()
        parser.add_argument("path", help="Path to executeable binary")
        self.binary = parser.parse_args()

    def setup_system(self):
        self.system = System()                                               # create the system we are going to simulate
        self.system.clk_domain = SrcClockDomain()                            # Set the clock frequency of the system (and all of its children)
        self.system.clk_domain.clock = '1GHz'
        self.system.clk_domain.voltage_domain = VoltageDomain()
        self.system.mem_mode = 'timing'                                      # Use timing accesses
        self.system.mem_ranges = [AddrRange('512MB')]                        # Create an address range
        self.system.cpu = TimingSimpleCPU()                                  # Create a simple CPU
        self.system.membus = SystemXBar()                                    # Create a memory bus, a system crossbar, in this case
        self.system.cpu.icache_port = self.system.membus.cpu_side_ports      # Hook the CPU ports up to the membus
        self.system.cpu.dcache_port = self.system.membus.cpu_side_ports
        self.system.cpu.createInterruptController()                          # create the interrupt controller for the CPU and connect to the membus

    def setup_memory(self):
        self.system.mem_ctrl = MemCtrl()        # Create a DDR3 memory controller and connect it to the membus
        self.system.mem_ctrl.dram = DDR3_1600_8x8()
        self.system.mem_ctrl.dram.range = self.system.mem_ranges[0]
        self.system.mem_ctrl.port = self.system.membus.mem_side_ports

    def interconnect(self):
        self.system.system_port = self.system.membus.cpu_side_ports     # Connect the system up to the membus

    def set_binary(self):
        self.system.workload = SEWorkload.init_compatible(self.binary.path)
        process = Process()                 # Create a process for a simple "Hello World" application
        process.cmd = [self.binary.path]    # cmd is a list which begins with the executable (like argv)
        self.system.cpu.workload = process  # Set the cpu to use the process as its workload and create thread contexts
        self.system.cpu.createThreads()

    def instanciate_processor(self):
        root = Root(full_system = False, system = self.system)  # set up the root SimObject and start the simulation
        m5.instantiate()                                        # instantiate all of the objects we've created above

    def run_simulation(self):
        print("Beginning simulation @ tick %i" % (m5.curTick()))
        exit_event = m5.simulate()
        print('Exiting @ tick %i because %s' % (m5.curTick(), exit_event.getCause()))

riscv = Processor()

riscv.setup_system()
riscv.setup_memory()
riscv.interconnect()
riscv.set_binary()
riscv.instanciate_processor()
riscv.run_simulation()