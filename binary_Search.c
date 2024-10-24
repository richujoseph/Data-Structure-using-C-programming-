#include<stdio.h>
int main()
{
int n,t=0;t++;
printf("Enter the size of array:\t");
scanf("%d",&n);
int i,a[n];
printf("Enter the elements of array in asscending order:\t");
for(i=0;i<n;i++)
{
t++;
scanf("%d",&a[i]);
}t++;
int key,left=0,right=n-1,flag=0,m,mid=0;t++;t++;t++;t++;
printf("Enter the element to found:\t");
scanf("%d",&m);
while(left<=right)
{
t++;
mid=(left+right)/2;
if(a[mid]==m)
{
t++;
{
flag=1;t++;
break;
}
}
else if(a[mid]<m){
t++;
			left=mid+1;
		}
else if(a[mid]>m){
t++;
			right=mid-1;

}
}
if(flag==1)
{
t++;
printf("%d is found at %d",m,mid);
}
else {
t++;
printf("The element not found ");
}
printf("\nTime complexity is %d\n",t);
return 0;t++;
}

