#include<stdio.h>
int main()
{
	char* p, str[100];
	p = str;
	scanf_s("%s", &str, 100);
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')printf("%c",*p+'A'-'a');
		if (*p >= 'A' && *p <= 'Z')printf("%c", *p-'A'+'a');
		p++;
	}
	return 0;
}