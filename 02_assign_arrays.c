//Bai 2. Sao chep mang intArr[5] sang mang floatArr[10], cac phan tu con lai cua mang floatArr[10] gan bang 0
#include<stdio.h>

int main()
{
	int i, intArr[5];
	float floatArr[10];
	
	//Enter data for integer array
	printf("Enter data for integer array:\n");
	for(i = 0; i < 5; i++)
	{
		printf(">>");
		scanf("%d", &intArr[i]);
		
	}
	
	//Copy data from integer array to float array
	for(i = 0; i < 10; i++)
	{
		if(i < 5)
			floatArr[i] = intArr[i];
		else
			floatArr[i] = 0;
	}
	
	//Display integer array
	printf("\nInteger array:\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d, ", intArr[i]);
		
	}
	
	//Display float array
	printf("\n\nFloat array:\n");
	for(i = 0; i < 10; i++)
	{
		printf("%.2f, ", floatArr[i]);
		
	}
	
	return 0;
}
