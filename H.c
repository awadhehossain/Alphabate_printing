#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print H\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

 for(int i=1;i<=n;i++)
        {
            
            for(int j=1;j<=n;j++)
            {
                if (i==n/2+1||j==1||j==n)
                printf(" *");
                else
                printf("  ");
            }
            printf("\n");
        }





    return 0;
}