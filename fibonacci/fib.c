#include <stdio.h>
#include <time.h>

int fib(int n) {
    if (n < 2){
        return n;
    }
    return fib(n - 1) + fib(n - 2); 
}

int main(int argc, char **argv){
    clock_t start = clock();
    
    int res = fib(40); 
    printf("%d\n", res);
    
    clock_t end = clock();
    double elapsed = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Time spent %f \n", elapsed);

    return 0;
}


//102334155
//Time spent 0.434770 






