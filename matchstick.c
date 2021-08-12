#include <stdio.h>
int main()
{
    int sum = 0, a, num, c, r;
    while (sum < 20)
    {
        printf("Pick out of 1,2,3 and 4 matchsticks.\n");
        scanf("%d", &num);
        c = 5 - num;
        printf("Computer chooses: %d\n", c);
        a = num + c;
        sum = sum + a;
        r = 21 - sum;
        printf("Remaining Matchsticks are %d\n", r);
        if (r == 1)
        {
            printf("Pick the remaining matchstick.\n");
            scanf("%d", &num);
            printf("COMPUTER WINS\n");
            
        }
    }

    return 0;
}