#include <iostream>
#include <string.h>

using namespace std;

char s[50];

int main()
{
	cin>>s;

	int v = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i+1] != '\0' && s[i] == 'I' && s[i+1] == 'V')
		{
			v += 4;
			i++;
		}
		else if(s[i+1] != '\0' && s[i] == 'I' && s[i+1] == 'X')
		{
			v += 9;
			i++;
		}
		else if(s[i+1] != '\0' && s[i] == 'X' && s[i+1] == 'L')
		{
			v += 40;
			i++;
		}
		else if(s[i+1] != '\0' && s[i] == 'X' && s[i+1] == 'C')
		{
			v += 90;
			i++;
		}
		else if(s[i+1] != '\0' && s[i] == 'C' && s[i+1] == 'D')
		{
			v += 400;
			i++;
		}
		else if(s[i+1] != '\0' && s[i] == 'C' && s[i+1] == 'M')
		{
			v += 900;
			i++;
		}
		else
			switch(s[i]) {
				case 'M':
					v += 1000;
					break;
				case 'D':
					v += 500;
					break;
				case 'C':
					v += 100;
					break;
				case 'L':
					v += 50;
					break;
				case 'X':
					v += 10;
					break;
				case 'V':
					v += 5;
					break;
				default:
					v += 1;
			}
	}

	cout<<v;

	return 0;
}

