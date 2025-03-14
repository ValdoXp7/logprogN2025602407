#include <stdio.h>
#include <math.h>

int main ()
{
    int L=12;

    float a1= L * (L/2);
    float a2= (L/2)* 11.61 / 2;
    float at= a1 + a2;
    float m2= 2956;

    float pago = at * m2;
    float IVA = pago * 0.16;
    float pt = (float)(pago - IVA);

    printf ("el valor de at es: %f\n", at);
    printf("el valor de pago es: %f\n", pago);
    printf("el valor de IVA es: %f\n", IVA);
    printf("el valor de pt es: %f\n", pt);

    return 0;
}
