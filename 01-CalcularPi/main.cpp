#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    double pi = 0;
    double sign=1.;
    const double eps=1e-7;
    int i=0;
    do
    {
        pi += sign/ (2. * i + 1.);
        sign=-sign;
        i++;
    }while(1./ (2. * i + 1.)>eps);
    pi *= 4;
    printf("pi=%10.6lf", pi);
    getch();
    return 0;
}
