 #include<stdio.h>
int main()
{
int i,j,n;
printf("Here n is how many lines you want to print K\n");
printf("Enter the value of n.(N must be an  odd   number ):");
scanf("%d",&n);

for(i=1;i<=n/2+1;i++)
{
for(j=1;j<=n/2+1;j++)
{
 if(j==1)
 printf(" *");
 if(i+j==n/2+1)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}

for(i=1;i<=n/2;i++)
{
for(j=1;j<=n/2;j++)
{
 if(j==1)
 printf(" *");
 if(i==j)
 printf(" *");
 else
 printf("  ");
}
printf("\n");

}



    return 0;
}