#include<stdio.h>
 
int main()
{
    int a[10][10],i,j,m,n,sum = 0;
 
    printf("Enter no. of rows :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &a[i][j]);
        }
    }
 
    printf("\nThe given matrix is \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < m; ++i) 
            {
                sum = sum + a[i][i];
            }
 
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
 
}
