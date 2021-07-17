#include<stdio.h>
void result(int maths,int accountancy,int economics,float *percentage,float *average){
    int sum;
    sum=maths+accountancy+economics;
    *average=sum/3.0;
    *percentage=(sum/300.0)*100;
}
int main(){
    int math,acc,eco;
    float per,ave;
    printf("Marks of respective subjects out of 100 : \n");
    printf("\nMaths: ");
    scanf("%d",&math);
    printf("\nAccountancy: ");
    scanf("%d",&acc);
    printf("\nEconomics: ");
    scanf("%d",&eco);
    result(math , acc ,eco,&per,&ave);
    printf("YOUR CHILD'S PERFORMANCE : \n");
    printf("Average Marks: %f",ave);
    printf("Percentage : %f",per)
}