// Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

/*
    print Farenheit-Celcius table
    for fahr = 0, 20, ....,300
*/

int main()
{
    float fahr;
    float celcius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;
    printf("%7s %8s \n", "Farenheit", "Celcius");
    while (fahr <= upper)
    {
        celcius = 5 * (fahr-32) / 9;
        printf("%7.1f %8.1f \n", fahr, celcius);
        fahr = fahr + step;
    }
}
