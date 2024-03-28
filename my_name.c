#include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print A\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);
printf("\n");
//For A
for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
 if(i+j==n+1)
 printf(" *");
 else if(j-i==n-1)
 printf(" *");
 else if(i==n/2+1 && j>(n+1)/2 && j<2*n-i)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//For W
for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
 if(i+j==n+1)
 printf(" *");
 else if (j==1 ||j==2*n-1)
 printf(" *");
 else if(j-i==n-1)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//For 2nd A
for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
 if(i+j==n+1)
 printf(" *");
 else if(j-i==n-1)
 printf(" *");
 else if(i==n/2+1 && j>(n+1)/2 && j<2*n-i)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}
printf("\n");

//For D
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if((i==1||i==n)&&(j>1&&j<n))
 printf("* ");
 else if(j==1)
 printf("* ");

else if(j==n && i>1 && i<n)
 printf("* ");

 else
 printf("  ");
}
printf("\n");

}

printf("\n");

//For H
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if((i==n/2+1||j==n)||j==1)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}

printf("\n");

//For E
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==1||i==n || i==n/2+1||j==1)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}

    return 0;
}