


#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print Q\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(((i==1 || i==n) && j!=1 && j!=n) ||((j==1||j==n) && i!=n && i!=1))
 printf(" *");
 else if(i==n-1&&j==n-1)
 printf(" *");
//  else if(j==n&& i==n)
// printf(" *");
 else
 printf("  ");
}
printf("\n");

}

for(i=1;i<=1;i++)
{
for(j=1;j<=n+1;j++)
{
 if(i==1 && j==n+1)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}




    return 0;
}
