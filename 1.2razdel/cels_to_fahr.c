#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -300;
    upper = 300;
    step = 30;
    
    celsius = lower;

    printf("Celsois to Fahr Table \n-------------------------\n");

    while (celsius <= upper){
        fahr = ((9.0 / 5.0) * celsius) + 32;// Ebu jestko kak Buryat
        printf("%7.2f%18.2f\n", fahr, celsius);
        celsius+=step;   
    }

}
