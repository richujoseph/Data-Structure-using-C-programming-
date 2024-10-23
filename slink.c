#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* head=NULL;
struct node* CreateNode(int value){
	struct node* new_node=(struct node*) malloc(sizeof(struct node));
	new_node->data=value;
	new_node->link=NULL;
	return new_node;
}
int InsertAtBeginning(int item){
	struct node* temp=CreateNode(item);
	if(temp==NULL)
		printf("Insertion is not possible\n");
	temp->link=head;
	head=temp;
}
int InsertAtEnd(int item){
	struct node* temp=CreateNode(item);
	struct node *ptr=head;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
}
void display(){
	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->link;	
	}
	printf("null\n\n");
	
}
int main()
	{
	printf("\t\t***Linked List OPeration***\t\t");
	int q,item;
do
	{
	printf("\n1.Insert at begining \n2.Insert at end\n3.display\n4.stop\n");
	printf("Choose an option: ");
	scanf("%d",&q);
	switch(q)
	{
	case 1:
		printf("Enter the element to be inserted at Beginning\n");
		scanf("%d",&item);
		InsertAtBeginning(item);
		break;
	case 2:
		printf("Enter the element to be inserted at end\n");
		scanf("%d",&item);
		InsertAtEnd(item);
		break;
	case 3:
		display();
		break;
	case 4:
		exit(0);
		break;
	default:
		printf("Invalid Input\n");
		break;
	}
	}while(q!=4);	
}
	
		
		
	
