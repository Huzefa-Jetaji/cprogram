#include<stdio.h>
#include<math.h>
void smd(int a,int b,int c,int d,int e,int *sum,float *mean,float *standard_deviatio){
    *sum=a+b+c+d+e;
    *mean=*sum/5.0;
    *standard_deviatio=sqrt(pow((a-*mean),2)+pow((b-*mean),2)+pow((c-*mean),2)+pow((d-*mean),2)+pow((e-*mean),2));
}
int main(){
    int u,v,w,x,y,s;
    float m,sd;
    printf("Enter Five Numbers.\n");
    scanf("%d%d%d%d%d",&u,&v,&w,&x,&y);
    smd(u,v,w,x,y,&s,&m,&sd);
    printf("Sum: %d",s);
    printf("Mean: %f",m);
    printf("Standard Deviation: %f",sd);
}