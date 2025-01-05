#include<stdio.h>
#include<stdlib.h>
int n;
int top=-1;
void push(int);
void pop(int);
void display(int);
void main()
{
	int ch;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	while(1)
	{
		printf("\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR DISPLAY\nPRESS 4 FOR EXIT\n");
		printf("Enter the choice = ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(a[n]);
				break;
			case 2:
				pop(a[n]);
				break;
			case 3:
				display(a[n]);
				break;
			case 4:
				exit(0);
		}
	}
}
void push(int a[n])
{
	int x;
	if(top==a[n-1])
		printf("Stack Overflow\n");
	else
	{
		printf("Enter the value to be inserted = ");
		scanf("%d",&x);
	
		a[++top]=x;
	}
}
void pop(int a[n])
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("The no. %d has been deleted\n",a[top]);
		top--;
	}
}
void display(int a[n])
{
	int i;
	if(top==-1)
	{
		printf("The stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d \n",a[i]);
	}
}
