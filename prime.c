#include <stdio.h>
int main()
{
    int n, i;
    for (i = 1; i <= 300; i++)
    {  
       n=1;     
        while (n++<i)
        {
            if (i % n == 0)
              break;  
         }
      if(n==i)
       printf("%d",i);
    }
    return 0;
}
