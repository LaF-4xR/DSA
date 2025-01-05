#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int top=-1,stack[SIZE];
void push();
void pop();
void display();
void topdisplay();
void main()
{
	int ch;
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR DISPLAY\nPRESS 4 FOR DISPLAYING THE TOP ELEMENT\nPRESS 5 FOR EXIT\n");
		printf("Enter the choice = ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				topdisplay();
				break;
			default:
				exit(0);
		}
	}
}
void push()
{
	int x;
	if(top==SIZE-1)
		printf("\nStack overflow\n");
	else
	{
		printf("\nEnter the value to be inserted = ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
		printf("\nStack Underflow\n");
	else
	{
		printf("\nThe no. %d has been deleted\n",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nThe stack is empty\n");
	}
	else
	{
		printf("The element(s) in the stack are as follows = ");
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}
void topdisplay()
{
	if(top==-1)
		printf("\nTop element is yet to be inserted\n");
	else
		printf("\nThe top element is = %d\n",stack[top]);
}
