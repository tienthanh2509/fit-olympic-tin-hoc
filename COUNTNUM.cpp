#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[101];
	fflush(stdin); 
	gets(s);
	
	int c = 0;
	int i = 0;
	bool f = false;

	while(s[i] != '\0')
	{
		if(s[i] != 32)
			f = true;

		if(s[i+1] == 32 && f)
		{
			c++;
			f = false;
		}

		i++;
	}

	if(f)
		c++;

	cout<<c;

	return 0;
}
