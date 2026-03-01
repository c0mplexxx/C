#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = -300;
    upper = 300;
    step = 30;
    
    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) /9; // Ebu jestko kak Buryat
        printf("%d\t%d\n", fahr, celsius);
        fahr+=step;   
    }

}
