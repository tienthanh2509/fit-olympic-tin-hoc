#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char s[6] = {'A', 'B', 'A', 'C', 'G', '\0'};
	char t[6];

	puts(s);

	int i = 0;
	int p = 0;
	while(s[i] != '\0')
	{
		bool ne = true;

		int j = 0;
		while(t[j] != '\0')
		{
			if(s[i] == t[j])
			{
				ne = false;
				break;
			}

			j++;
		}

		if(ne)
		{
			t[p] = s[i];
			t[++p] = '\0';
		}

		i++;
	}

	puts(t);

	return 0;
}
