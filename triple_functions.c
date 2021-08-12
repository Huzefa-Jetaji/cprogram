#include<math.h>
#include<stdio.h>
void area_of_triangle(int x1,int x2,int x3,int y1,int y2,int y3,float *area){
    *area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    return;
}
void point_inside_the_triangle(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4,float *sum_area){
    float PAB,PBC,PAC;
    PAB=(x1*(y2-y4)+x2*(y4-y1)+x3*(y1-y2))/2.0;
    PBC=(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2.0;
    PAC=(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2.0;
    *sum_area=PAB+PBC+PAC;
    return;
}
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float area,d,sum_area;
    printf("Enter the coordinates of two points to find the distance between them.\n");
    printf("x1: ");
    scanf("%d",&x1);
    printf("y1: ");
    scanf("%d",&y1);
    printf("x2: ");
    scanf("%d",&x2);
    printf("y2: ");
    scanf("%d",&y2);
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("Distance between two points is %f\n",d);
    printf("Enter the third coordinate for findng the area of triangle.\n");
    printf("x3: ");
    scanf("%d",&x3);
    printf("y3: ");
    scanf("%d",&y3);
    area_of_triangle(x1,x2,x3,y1,y2,y3,&area);
    area<0?area=area*-1:0;
    printf("Area of triangle is %f\n",area);
    printf("Enter a coordinate to check whether the point lies inside the triangle or not.\n");
    printf("x4: ");
    scanf("%d",&x4);
    printf("y4: ");
    scanf("%d",&y4);
    point_inside_the_triangle(x1,x2,x3,x4,y1,y2,y3,y4,&sum_area);
    area==sum_area?printf("1"):printf("0");
    return 0;
}