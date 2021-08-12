#include <stdio.h>
int main()
{
    int num, rem, n1, n2, n3, n4, n5, n6;
    printf("Enter amount of money in rupees only(Not even in paise.)\n");
    scanf("%d", &num);

    n1 = num / 100;
    rem = num - n1 * 100;

    n2 = rem / 50;
    rem = rem - n2 * 50;

    n3 = rem / 10;
    rem = rem - n3 * 10;

    n4 = rem / 5;
    rem = rem - n4 * 5;

    n5 = rem / 2;
    rem = rem - n5 * 2;

    n6 = rem / 1;
    printf("Required\n");
    printf("Rs100 notes=%d\n", n1);
    printf("Rs50 notes=%d\n", n2);
    printf("Rs10 notes=%d\n", n3);
    printf("Rs5 notes=%d\n", n4);
    printf("Rs2 notes=%d\n", n5);
    printf("Rs1 notes=%d\n", n6);
    return 0;
}