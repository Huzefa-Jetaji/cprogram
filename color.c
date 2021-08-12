#include <stdio.h>
int main()
{
    int R, G, B;
    float C, M, Y, K, W,num1,num2,num3;

    printf("Enter the integer values of R,G,B(0-255)\n");
    printf("Value of R:");
    scanf("%d", &R);
    printf("Value of G:");
    scanf("%d", &G);
    printf("Value of B:");
    scanf("%d", &B);

    if (R == 0 && G == 0 && B == 0)
    {
        printf("Value of Cyan(C):0\n");
        printf("Value of Magenta(M):0\n");
        printf("Value of Yellow(Y):0\n");
        printf("Value of Black(K):1\n");
    }
    else
    {

        num1 = R / 255.0;
        num2 = G / 255.0;
        num3 = B / 255.0;

        if(num1>num2){
            W=num1>num3?num1:num3;
        }
        else{
            W=num2>num3?num2:num3;
        }
        C = (W - num1) / W;
        M = (W - num2) / W;
        Y = (W - num3) / W;
        K = 1 - W;

        printf("Value of Cyan(C):%f\n",C);
        printf("Value of Magenta(M):%f\n",M);
        printf("Value of Yellow(Y):%f\n",Y);
        printf("Value of Black(K):%f\n",K);
    }
    return 0;
}