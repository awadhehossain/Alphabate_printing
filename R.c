#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print R\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
for(j=1;j<=n;j++)
{
 if((i==1||i==n)&&(j>1&&j<n))
 printf(" *");
 else if(j==1)
 printf(" *");

else if(j==n && i>1 && i<n)
 printf(" *");
 else if(i-j==n-1)
 printf(" *");

 else
 printf("  ");
}
printf("\n");

}


    return 0;
}