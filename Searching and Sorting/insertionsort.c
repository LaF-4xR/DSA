#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,k,c=1,temp=0;
	printf("Enter the range = ");
	scanf("%d",&n);
	printf("Enter the elements = ");
	for(i=0;i<n;i++)//input
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
		}
		printf("\nIteration:%d\n",c);
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
		c++;
	}
	getch();
}
