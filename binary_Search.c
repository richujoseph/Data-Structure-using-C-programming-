#include <stdio.h>
int main(){
	int arr[30],key,n,t=0,flag=0;t++;t++;
	printf("Enter number of elements in array ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(int i=0;i<n;i++){
		t++;
		printf("Enter element (%d) ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nARRAY\n");
	printf("{");
	for(int i=0;i<n;i++){
		t++;
		printf("%d",arr[i]);
		if (i==n-1)
			printf("}");
		else
			printf(",");
	}

	printf("\nEnter element to search ");
	scanf("%d",&key);
	
	int mid,left=0,right=n-1;t++;t++;
	while (left<=right){
	
		t++;
		mid=(left+right)/2;t++;
		if (arr[mid]==key){
			t++;
			printf("Element found at %d",mid+1);
			/*if((mid+1)%10==1 && (mid+1)!=11)
				printf("%d is found at %dst position",key,mid+1);
			else if ((mid+1)%10==2 && (mid+1)!=12)
				printf("%d is found at %dnd position",key,mid+1);
			else if ((mid+1)%10==3 && (mid+1)!=13)
				printf("%d is found at %drd position",key,mid+1);
			else
				printf("%d is found at %dth position",key,mid+1);*/
			flag=1;t++;
			break;
		}
		else if(arr[mid]<key){
			t++;
			left=mid+1;t++;
		}
		else if(arr[mid]>key){
			t++;
			right=mid-1;t++;
		}
	}
	if (flag==0){
		t++;
		printf("\nElement not Found");
	}
	printf("\nTIme complexity is %d\n\n",t);
	return 0;
	
}
