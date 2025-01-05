#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int top=-1,stack[SIZE];
void push();
void pop();
void display();
void main()
{
	int ch;
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR DISPLAY\nPRESS 4 FOR EXIT\n");
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
				exit(0);
		}
	}
}
void push()
{
	int x;
	if(top==SIZE-1)
		printf("Stack Overflow\n");
	else
	{
		printf("Enter the value to be inserted = ");
		scanf("%d",&x);
	
		stack[++top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("The no. %d has been deleted\n",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("The stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d \n",stack[i]);
	}
}
