#include <stdio.h>
#include <math.h>

int main ()
{
    int L=2;

    float ac=L*L;
    float pc=L*4;
    float at1=L*L/2;
    float ptl=L+L+sqrt(8);
    float at2=L*L/2;
    float pt2=L+L+sqrt(8);
    float at3=((3.0/2*L)*2)/2.0;
    float pt3=(3.0/2*L)+L+sqrt(5);
    float ar=(2*L)*(1.0/4*2);
    float pr=2*(1/4*L)+2*(L+L);
    float at= ac+at1+at2+at3+ar;

    float pt=sqrt(13)+2*(sqrt(8))+2+1+4+3;

 printf("El área total es de: %.2f\n", at);
 printf("El perímetro total es de: %.2f\n", pt);

 return 0;

}
