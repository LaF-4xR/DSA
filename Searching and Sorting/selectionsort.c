#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,c=1,n,min,k,f;
	printf("Enter the range = ");
	scanf("%d",&n);
	//input loop
	printf("Enter the elements = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)//sorting
	{
		min=i;
		{
			for(j=i+1;j<n;j++)
			{
				if(a[min]>a[j])
				{
					min=j;
				}
		    }
				if(min!=j)
				{
					k=a[i];
					a[i]=a[min];
					a[min]=k;
				}
			printf("\nIteration:%d\n",c);
			for(f=0;f<n;f++)//display loop
			{
				printf("%d ",a[f]);
			}
			c++;
		}
	}
	getch();
}
