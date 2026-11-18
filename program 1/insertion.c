#include<stdio.h>
int main()
{
int a[100];
int size,pos,num;
printf("Enter the array size:\n",size);
scanf("%d",&size);
printf("Enter %d elements:\n",size);
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("\n");
printf("Enter the position:");
scanf("%d",&pos);
printf("Enter the num:");
scanf("%d",&num);
for(int i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;
size ++;
printf("Updated Array:");
for(int i=0;i<size;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
