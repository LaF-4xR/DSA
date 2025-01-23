//wap to create astructure of n no. of students
#include<stdio.h>
#include<conio.h>
struct student 
{
	int roll,computer,maths,chemistry,total,avg;
	char name[10],grade;
};
struct student s[2];
void main()
{
	int i,n;
	printf("Enter the no. of students = ");
	scanf("%d",&n);
	//input
	for(i=0;i<n;i++)
	{
		printf("Enter the Roll no. of the student = ");
		scanf("%d",&s[i].roll);
		printf("Enter the Name of the student = ");
		scanf("%s",&s[i].name);
		printf("Enter the marks of Computer = ");
		scanf("%d",&s[i].computer);
		printf("Enter the marks of Maths = ");
		scanf("%d",&s[i].maths);
		printf("Enter the marks of Chemistry = ");
		scanf("%d",&s[i].chemistry);
		s[i].total=s[i].computer+s[i].maths+s[i].chemistry;
		s[i].avg=s[i].total/3;
		{
			if(s[i].avg>=40 && s[i].avg<=50)
			s[i].grade='E';
			else if(s[i].avg>=50 && s[i].avg<=60)
			s[i].grade='D';
			else if(s[i].avg>=60 && s[i].avg<=70)
			s[i].grade='C';
			else if(s[i].avg>=70 && s[i].avg<=80)
			s[i].grade='B';
			else if(s[i].avg>=80 && s[i].avg<=90)
			s[i].grade='A';
			else 
			s[i].grade='O';
		}
	}
	//output
	printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("ROLL\tNAME\tCOMP\tMATHS\tCHEM\tTOTAL\tAVG\tGRADE\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll,s[i].name,s[i].computer,s[i].maths,s[i].chemistry,s[i].total,s[i].avg,s[i].grade);
	}
	getch();
}
