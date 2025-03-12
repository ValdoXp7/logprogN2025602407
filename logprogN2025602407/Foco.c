#include <stdio.h>
#include <math.h>
int main()
{
   int L=7;

   float a12= 2*(L*21);
   float a34= 2* (L*21)/2;
   float a5= M_PI*110.25/2;
   float at= a12+a34+a5;
   float p34= sqrt(49 + 441);
   float p5= M_PI*21/2;
   float pt= p34*2+p5+7*L;


   printf("El valor de pt es: %.2f\n", pt);
   printf("El valor de at es: %.2f\n", at);


   return 0;



}
