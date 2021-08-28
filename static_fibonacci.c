#include <stdio.h>
void fibonacci_static(int n)
{
    static int n1 = 1, n2 = 0, count = 0;
    int s;
    if (n == count)
        return;
    s = n1 + n2;
    printf("%d ", s);
    n1 = n2;
    n2 = s;
    count++;
    fibonacci_static(n);
}
int main()
{
    int n;
    printf("How many fibonacci no. do you want?\n");
    scanf("%d", &n);
    fibonacci_static(n);
}