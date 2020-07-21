#include<stdio.h>
 
int sum(int n);
 
int main()
{
    int num, res;
 
    printf("Enter the number: ");
    scanf("%d", &n);
    res = sum(n);
    printf("Sum of digits in %d is %d\n", num, res);
    return 0;
}
 
int sum (int n)
{
    if (n != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
