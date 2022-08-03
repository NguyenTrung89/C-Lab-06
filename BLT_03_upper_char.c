//BLT 03. Mang 10 ky tu, nhap tu ban phim cac ky tu tu a-z, chuyen sang chu hoa, va in ket qua ra man hinh.
#include<stdio.h>

char upper(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		c -= ('a' - 'A');
	}
	return c;
}

int main()
{
	char s[10];
	int i = 0, j;
	
	//Enter 10 character (a-z)
	while(i < 10)
	{
		fflush(stdin);
		printf("Enter a character (a-z): ");
		s[i] = getchar();
		if(s[i] >= 'a' && s[i] <= 'z')
			++i;
		else
			printf("Retype!\n");
	}
	
	//Upper
	for(j = 0; j < 10; j++)
	{
		s[j] = upper(s[j]);
		printf("%c", s[j]);
	}
	return 0;
}
