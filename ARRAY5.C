#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],j,i;
clrscr();
printf("enter values in array\n");
for(i=0; i<2; i++)
for(j=0; j<2; j++)
scanf("%d\n",&a[i][j]);
printf("array values is\n");
for(i=0;i<2; i++)
for(j=0; j<2; j++)
printf("%d\n",a[i][j]);

printf("enter values in array\n");
for(i=0; i<2; i++)
for(j=0; j<2; j++)
scanf("%d\n",&b[i][j]);
printf("array values is\n");
for(i=0;i<2; i++)
for(j=0; j<2; j++)
printf("%d\n",b[i][j]);

for(i=0; i<2; i++)
{
c[i][j]=a[i][j]=+b[i][j];
printf("sum of two array\n");
for(i=0; i<2; i++)
for(j=0; j<2; j++)
printf("%d \n",c[i][j]);
}
     getch();
     return 0;
}