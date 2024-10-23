#include<stdio.h>
int b,stack[],MAX,top;
void push()
{
	int n;
	if(top==MAX-1)
	{
		printf("The stack is full");
	}
	else
	{
	printf("Enter any element to be added: ");
	scanf("%d",&n);
	top++;
	stack[top]=n;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The stack is Empty");
	}
	else
	{
		top--;
	}
	
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("The stack is Empty");
	}
	else
	{
		printf("The elements in the stack are:\n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	printf("\n");
}
void main()
{
	int n,b,c;
	char a;
	top=-1;
	printf("***Stack operation***\n");
	printf("Enter the size of array: ");
	scanf("%d",&b);
	printf("Enter the maximum limit: ");
	scanf("%d",&c);
	do{
	printf("1.PUSH\n2.POP\n3.DISPLAY\n");
	printf("Enter an option: ");
	scanf("%d",&n);
	MAX=c;
	switch(n)
	{
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		default:printf("Invalid input\n");
			break;
	}
	printf("Do you want to countinue?(y/n):");
	scanf("%s",&a);
	}
	while(a=='y' || a=='Y');
}
