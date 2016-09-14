#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	gets(s);

	int c = 0;
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '.')
			c++;
		i++;
	}
	printf("%d", c+1);

	return 0;
}
