//qvii
#include<stdio.h>
#include<conio.h>
struct point
{
	int x,y;
};
struct point p[2];
void main()
{
	int i,n;
	printf("How many coordinates do u want = ");
	scanf("%d",&n);
	//input
	for(i=0;i<n;i++)
	{
		printf("Enter the x coordinate = ");
		scanf("%d",&p[i].x);
		printf("Enter the y coordinate = ");
		scanf("%d",&p[i].y);
	}
	//output
	printf("----------------------------------------------\n");
	printf("X\tY\t(X,Y)\n");
	printf("----------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t(%d,%d)\n",p[i].x,p[i].y,p[i].x,p[i].y);	
	}
	//checking
	for(i=0;i<n;i++)
	{
		if(p[i].x<0 && p[i].y>0)
		printf("(%d,%d) is present in the 2nd Quadrant\n",p[i].x,p[i].y);
	}
	getch();
}
