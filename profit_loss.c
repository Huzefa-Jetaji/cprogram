#include <stdio.h>
int main()
{
    int sp, cp, profit, loss;
    printf("Enter Selling Price and Costing Price of an item.\n");
    printf("Selling Price:");
    scanf("%d", &sp);
    printf("Costing Price:");
    scanf("%d", &cp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("The Seller made a profit of %d\n", profit);
    }
    else
    {
        if (sp < cp)
        {
            loss = cp - sp;
            printf("The Seller incurred a loss of %d\n", loss);
        }
        else
            printf("The Seller neither made profit nor loss.\n");
    }
    return 0;
}