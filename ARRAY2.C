#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,n;
clrscr();
printf("enter size of array\n");
scanf("%d\n",&n);
printf("enter values in array\n");
for(i=0; i<n; i++)
scanf("%d",&a[i]);
printf("display array\n");
for(i=0; i<n; i++)
printf("%d\n",a[i]);
getch();
return 0;
}