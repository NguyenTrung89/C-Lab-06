//Bai 7. Nhap 10 ky tu, dung nhap khi an enter (chua du 10 ky tu). Hien thi danh sach cac ky tu da nhap va ma ASCII
#include<stdio.h>

int main()
{
	int i, size = 0;
	char name[10];
	int enter = 10; //ASCII encoding of 'Enter'
	fflush(stdin);
	printf("Enter characters: \n");
	for(i = 0; i < 10; i++)
	{
		//scanf("%c", &name[i]);
		name[i] = getchar();
		++size;
		if(name[i] == enter)
			break;
	}
	
	//Display character list
	for(i = 0; i < size; i++)
	{
		printf("%c = %d\n", name[i], name[i]);
	}
	
	return 0;
}
