#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL,*next,*temp,*newnode;
int count;
struct node* Node(int no){
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=no;
newnode->next=0;
return newnode;
}
int InsertAtBeginning(int d){
struct node* temp=Node(d);
if(temp==NULL){
printf("Insertion not possible\n");
}else{
temp->next=head;
head=temp;
printf("%d inserted at beginning\n",d);
}
}
int InsertAtEnd(int d){
struct node* temp=Node(d);
struct node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	printf("%d entered at End\n",d);
}
int InsertAtAnyPosition(int d,int po){
struct node* temp=Node(d);
	struct node* ptr=head;
	for(int i=1;i<po-1;i++){
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	ptr->next=temp;
	printf("%d entered at %d\n\n",d,po);
}
void display(){
struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d ->",ptr->data);
		ptr=ptr->next;
	}
	printf("null\n");
}
int DeleteFromBeginning(){
struct node *ptr=head;
	if(head==NULL){
		printf("Element not found\n");
	}else{
		head=ptr->next;
		free(ptr);
		printf("Element deleted from Beginning\n\n");
	}
}
int DeleteFromEnd(){
struct node *ptr=head;
struct node *temp=ptr;
	while(ptr->next!=NULL){
		temp=temp->next;
		ptr->next=NULL;
		free(temp);
	}
	printf("Element deleted from End\n");
}
int DeleteFromAnyPosition(int po){
	struct node* ptr=head;
	struct node* temp=ptr;
	for(int i=1;i<po-1;i++){
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	free(temp);
	printf("Element is deleted at %d\n",po);
}
int main(){
int n=0,opt,p;
do{
printf(" \n");
printf("1.InsertATbeginning\n2.InsertAtEnd\n3.InsertAtAnyPosition\n4.DeleteFromBeginning\n5.DeleteFromEnd\n6.DeleteFromAnyPosition\n7.Display\n8.Exit\n");
scanf("%d",&opt);
switch(opt){
	case 1:printf("Enter the data to be added\n");
		scanf("%d",&n);
		InsertAtBeginning(n);
		break;
	case 2:printf("Enter the data to be added\n");
		scanf("%d",&n);
		InsertAtEnd(n);
		break;
	case 3:printf("Enter the data to be added\n");
		scanf("%d",&n);
		printf("Enter the position\n");
		scanf("%d",&p);
		InsertAtAnyPosition(n,p);
		break;
	case 4:DeleteFromBeginning();
		break;
	case 5:DeleteFromEnd();
		break;
	case 6:printf("Enter the position to be deleted\n");
		scanf("%d",&p);
		DeleteFromAnyPosition(p);
		printf("\n");
		display();
		break;
	case 7:display();
		break;
	case 8:exit(0);
		break;
	default :
		printf("Error");
		break;
	}
}while(opt!=8);
return 0;
}
