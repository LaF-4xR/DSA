#include<stdio.h>
#include<stdlib.h>
#define MAX 3
void push();
void pop();
void display();
int top=-1,stack[MAX];
void main()
{
	int ch;
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR DISPLAY\nPRESS 4 FOR EXIT\n");
		printf("Enter your choice = ");
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
			default:
				exit(0);
		}
	}
}
void push()
{
	int x;
	if(top== MAX-1)
	{
		printf("The stack is full");
	}
	else
	{
		printf("Enter the no. to be inserted  = ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("The no. has been deleted");
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d ",stack[i]);
	}
}

