#include<stdio.h>
void main(){
  		int i,j,p,q,k=0,n;
		printf("Enter the row and column of matrix:\t");
		scanf("%d%d",&p,&q);
		int a[p][q];
		printf("Enter the elements of matrix:");
for(i=0;i<p;i++){
	for(j=0;j<q;j++){
			scanf("%d",&a[i][j]);
			}}
			printf("The elements of the matrix are:\n");
for(i=0;i<p;i++){
	for(j=0;j<q;j++){
			printf("%d\t",a[i][j]);
			}
			printf("\n");
			}

for(i=0;i<p;i++){
		for(j=0;j<q;j++){
				if(a[i][j]!=0){					  		
						k++;
					      }
					      n=k;
					      }
					      }
					 
int b[n][3];
k=0;
for(i=0;i<p;i++){
		for(j=0;j<q;j++){
				if(a[i][j]!=0){					  		
						b[k][0]=i;
						b[k][1]=j;
						b[k][2]=a[i][j];
						k++;
					      }
				}
		}
printf("\n");
printf("Sparse Matrix is:\n");
for(i=0;i<k;i++){
printf("%d\t %d\t %d\t",b[i][0],b[i][1],b[i][2]);
printf("\n");
}
}
