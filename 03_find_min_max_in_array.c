//Bai 3. Cho mang intArr[10], xac dinh min, max va dem so lan xuat hien cac gia tri do
#include<stdio.h>

int main()
{
	int i, minValue, maxValue, intArr[10];
	int count_min = 0, count_max = 0;
	
	//Enter data for array
	printf("Enter data for array:\n");
	for(i = 0; i < 10; i++)
	{
		printf(">>");
		scanf("%d", &intArr[i]);
	}
	
	//Find min, max
	minValue = intArr[0];
	maxValue = intArr[0];
	for(i = 1; i < 10; i++)
	{
		if(intArr[i] < minValue)
			minValue = intArr[i];
		if(intArr[i] > maxValue)
			maxValue = intArr[i];	
	}
	
	//Count min, max
	for(i = 0; i < 10; i++)
	{
		if(intArr[i] == minValue)
			++count_min;
		if(intArr[i] == maxValue)
			++count_max;
	}
	
	//Display
	printf("\nminValue = %d, occurrences: %d\n", minValue, count_min);
	printf("maxValue = %d, occurrences: %d\n", maxValue, count_max);
	
	return 0;
}
