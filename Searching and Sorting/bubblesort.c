#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp=0,k=1,a[10];
	printf("Enter the range = ");
	scanf("%d",&n);
	//input
	printf("Enter the no.s = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble sort
	printf("\nAfter sorting = ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	printf("%d ",a[j]);
    getch();
}
