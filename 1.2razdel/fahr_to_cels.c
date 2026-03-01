#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -300;
    upper = 300;
    step = 30;
    
    fahr = lower;

    printf("Fahr to Celsius Table \n-------------------------\n");

    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32); // Ebu jestko kak Buryat
        printf("%7.2f%18.2f\n", fahr, celsius);
        fahr+=step;   
    }

}
