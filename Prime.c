#include <stdio.h>
int pn(int, int);
int main()
{
    int n, check;
    printf("Enter a number: ");
    scanf("%d", &n);
    check = pn(n, n / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
 
int pn(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n % i == 0)
       {
         return 0;
       }
       else
       {
         return pn(n, i - 1);
       }       
    }
}
