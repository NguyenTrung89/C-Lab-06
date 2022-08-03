//Bai 6. Viet chuong trinh nhap danh sach ten 5 hoc vien (toi da 30 ky tu), hien thi danh sach ra man hinh.
#include<stdio.h>

struct details
{
    char name[30];
} student[5];

int main()
{
	int i;
	
	printf("Enter the names of 5 students:\n");
	for(i = 0; i < 5; i++)
	{
		gets(student[i].name);
	}
	
	printf("\nShow names of 5 students:\n");
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", student[i].name);
	}
	
	return 0;
}
