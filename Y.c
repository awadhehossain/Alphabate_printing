#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print Y\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

 for(int i=1;i<=n;i++)
        {
            
            for(int j=1;j<=n;j++)
            {
                if (i<n/2+1&&i==j)
                printf(" *");
                else if (i<n/2+1&&i+j==n+1)
                printf(" *");
                else if(j==n/2+1 && i>=j)
                printf(" *");
                else 
                printf("  ");
            }
            printf("\n");
        }





    return 0;
}