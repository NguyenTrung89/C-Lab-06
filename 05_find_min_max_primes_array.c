//Bai 5. Nhap mang 5 so nguyen to tu ban phim, hien thi mang, min, max
#include<stdio.h>
#include<math.h>

/*Function check prime number
check = 1: prime number
check = 0: not a prime number */
int checkPrimeNumber(int N)
{
	int i, j, check = 1;
	if(N <= 1)
		check = 0;
	else
	{
		for(i = 2; i <= sqrt(N); i++)
		{
			if(N % i == 0)
				check = 0;
		}
	}	
	return check;
}

int main()
{
	int i = 0, j, minValue, maxValue, primeArr[5];
	//Enter primes array
	while(i < 5)
	{
		printf("Enter a prime number: ");
		scanf("%d", &primeArr[i]);
		if(checkPrimeNumber(primeArr[i]) == 1)
			++i;
		else
			printf("Not a prime number. Retype!\n");
	}
	
	//Find min, max and show
	minValue = primeArr[0];
	maxValue = primeArr[0];
	printf("\nPrimes array: \n");
	for(int j = 0; j < 5; j++)
	{
		printf("%d, ", primeArr[j]);
		if(primeArr[j] < minValue)
			minValue = primeArr[j];
		if(primeArr[j] > maxValue)
			maxValue = primeArr[j];
	}
	printf("\nminValue = %d\n", minValue);
	printf("maxValue = %d", maxValue);
		
	return 0;
}
