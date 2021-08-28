#include <stdio.h>
void fibonacci(int n, int n1, int n2, int count)
{
    int s;
    if (n == count)
        return;
    s = n1 + n2;
    printf("%d ", s);
    n1 = n2;
    n2 = s;
    count++;
    fibonacci(n, n1, n2, count);
}
int main()
{
    int n, count = 0, n1 = -1, n2 = 1;
    printf("How many fibonacci do you want to see?\n");
    scanf("%d", &n);
    fibonacci(n, n1, n2, count);
}