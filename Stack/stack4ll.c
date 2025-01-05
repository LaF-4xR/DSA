#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int);
void pop();
void display();
void main()
{
	int ch,a;
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR DISPLAY\nPRESS 4 FOR EXIT\n");
		printf("Enter the choice = ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value to be inserted = ");
				scanf("%d",&a);
				push(a);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}
void push(int a)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a;
	if(top==NULL)
		newnode->next=NULL;
	else
		newnode->next=top;
	top=newnode;	
}
void pop()
{
	struct node *temp=top;
	if(top==NULL)
		printf("\nStack Underflow\n");
	else
	{
		printf("\nThe no. %d has been deleted\n",top->data);
		top=top->next;
		free(temp);
	}
}
void display()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		printf("\nThe stack list = ");
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}

