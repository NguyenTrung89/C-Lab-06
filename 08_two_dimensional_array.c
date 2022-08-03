//Bai 8. Dung mang 2 chieu 5 dong 6 cot, hien thi diem cho 5 hoc vien va hien thi diem TB moi hoc vien
#include<stdio.h>

int main()
{
	float mark[5][6]; //5 students and 6 subjects
	float averageScore[5];
	int i, j; //i = row, j = column
	
	//Enter scores for 5 students
	for(i = 0; i < 5; i++)
	{
		printf("Enter scores of 6 subjects for student %d:\n", i + 1);
		for(j = 0; j < 6; j++)
		{
			printf(">>");
			scanf("%f", &mark[i][j]);
		}
	}
	
	//Average score
	for(i = 0; i < 5; i++)
	{
		//printf("Average score of student %d = ", i + 1);
		for(j = 0; j < 6; j++)
		{
			averageScore[i] += mark[i][j] / 6;
		}
		//printf("%.1f\n", averageScore[i]);
	}
	
	//Display
	printf("Hoc vien |  CF  |  C   |  HDJ |  DW  | RDBMS| JAVA | TB\n");
	printf("-----------------------------------------------------------\n");
	for(i = 0; i < 5; i++)
	{
		printf("HV %d     |", i + 1);
		for(j = 0; j < 6; j++)
		{
			printf(" %.1f |", mark[i][j]);
		}
		printf(" %.1f\n", averageScore[i]);
	}
	
	return 0;
}
