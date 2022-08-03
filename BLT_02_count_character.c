//BLT 02. Nhap 1 chuoi (toi da 30 ky tu), dem so tu cua chuoi va so nguyen am co trong chuoi.
#include<stdio.h>

int checkVowel(char ch)
{
	int i, check = 0;
	char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
	for(i = 0; i < 10; i++)
	{
		if(ch == vowel[i])
			check = 1;
	}
	return check;
}

int main()
{
	char s[30];
	int i, count_char, count_vowel;

	gets(s);
	for(i = 0;;i++)
	{
		++count_char;
		if(checkVowel(s[i]) == 1)
			++count_vowel;
		if(s[i] == '\0')
			break;
	}
	
	printf("Total characters of the string: %d\n", count_char - 2); //Remove 'enter' và '\0'
	printf("Total vowel of the string: %d", count_vowel);
}
