#include<stdio.h>
void main()
{
int n,key,t=0;t++;
printf("Enter the size of the array\t");
scanf("%d",&n);
int i,a[n],flag;
printf("Enter the elements of array\t");
for(i=0;i<n;i++)
{
t++;
scanf("%d",&a[i]);
}t++;
printf("Enter the element to be found");
scanf("%d",&key);
for(i=0;i<n;i++)
{
t++;
if(a[i]==key)
{
t++;
flag=1;t++;
break;
}
}t++;
if(flag==1)
{
t++;
printf("The element is found");
}
else
{
t++;
printf("The element is not found");
}
printf("\n");
printf("The time complexity %d",t);


/*printf("\n");

for(i=0;i<n;i++){
printf("%d",a[i]);
printf("\t");
}
printf("\n");*/
}
