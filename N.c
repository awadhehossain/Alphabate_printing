#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print N\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
 if(i==j)
 printf(" *");
 else if(j==1||j==n)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}




    return 0;
}