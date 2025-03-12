#include <stdio.h>
#include <math.h>
int main()
{

    float L=7;
    float pi= 3.1416;
    float pt= (23.0/5.0)*L + pi*(L/2);
    float c1= pow (7,2);
    float c2= (float) 1/5*7 * 3/5*7;
    float c3= (float) 1/5*7* 1/5*7;
    float pe= (float)3.1416;
    float at= c1 + (float)2*c2 +(float) 2*c3+ (float)38/2;

    printf("El valor de at es: %f\n", at);
    printf ("El valor de pt es: %f", pt);

    return 0;
}
