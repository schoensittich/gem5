#include <stdio.h>

int accumulate(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

int main(void) {
    int loop_bound = 20; /* loop bound */
    int a = 1, b = 1, c = 0;
    
    while(loop_bound){
        
        if(loop_bound%20)
            c = accumulate(a,b);
        else
            c = substract(a,b);
        loop_bound = loop_bound -1;
    }

    return c;
}