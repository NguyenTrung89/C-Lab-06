//Viet chuong trinh nhap du lieu cho mang so nguyen intArr gom 10 phan tu. Hien thi cac phan tu o vi tri chan (0, 2, 4...)
#include<stdio.h>

int main()
{
    int i, intArr[10];
    //Enter data for the elements in the array
    printf("Enter data for the elements in the array:\n");
    for(i = 0; i < 10; i++)
    {
    	printf(">>");
        scanf("%d", &intArr[i]);
    }
    //Display elements in even index
    printf("Elements in even index:\n");
    for(i = 0; i < 10; i += 2)
    {
        printf("%d, ", intArr[i]);
    }
    
    return 0;
}
