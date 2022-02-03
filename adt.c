#include<stdio.h>
struct myArray {
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myArray * a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    int *ptr=(int*)malloc(tsize*sizeof(int))
}
int main()
{
    struct myArray marks;
    createarray(&marks, 100, 20);
}