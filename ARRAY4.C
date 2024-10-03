#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],b[5],c[5],i;
clrscr();
printf("enter values in array\n");
for(i=0; i<5; i++)
scanf("%d\n",&a[i]);
printf("array values is\n");
for(i=0;i<5; i++)
printf("%d\n",a[i]);

printf("enter values in array\n");
for(i=0; i<5; i++)
scanf("%d\n",&b[i]);
printf("array values is\n");
for(i=0;i<5; i++)
printf("%d\n",b[i]);

for(i=0; i<3; i++)
{
c[i]=a[i]=+b[i];
printf("sum of two array\n");
for(i=0; i<5; i++)
printf("%d \n",c[i]);
}
     getch();
     return 0;
}