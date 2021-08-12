#include<stdio.h>
#include<math.h>
int main(){
   float  radians,sn,cs,tn,ct,cosec,sec;
   float const pi=3.14159;
   printf("Enter the value of angle in degree.\n");
   scanf("%f",radians);
   radians=radians*180/pi;
   sn=sin(radians);
    cs=cos(radians);
     tn=tan(radians);
     cosec=1/sn;
     sec=1/cs;
    ct=1/tn;

     printf("Trigonometric Ratios are:\nsin=%f\ncos=%f\ntan=%f\ncosec=%f\nsec=%f\ncot=%f\n",sn,cs,tn,cosec,sec,ct);
     return 0;
      

}