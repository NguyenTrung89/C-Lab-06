#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Function specifies the range of random number generation
int getRandom(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main()
{
	int i, N, intArr[20];
	int check = 0;
	
	//Generate random values (0-99) for elements in array
	srand((unsigned int)time(NULL));
    for(i = 0; i < 20; i++)
	{
        intArr[i] = getRandom(0,99);
        printf("%d ", intArr[i] );
    }
    
    //Enter N
    printf("\n\nEnter a integer: ");
    scanf("%d", &N);
    
    //Check existence of N in array
    for(i = 0; i < 20; i++)
	{
        if(intArr[i] = N)
        	check = 1;
    }
    if(check == 0)
    	printf("No exist!");
    else
    	printf("Exist %d in array", N);
    
    return 0;
}
