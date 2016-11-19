#include <iostream>

using namespace std;

int main()
{
	int k = 0;
	char encrypt[101];
	cin>>encrypt>>k;

	int i = 0;
	while(encrypt[i] != '\0')
	{
		char d = encrypt[i]-k;
		cout<<(int) d<<endl;
		d += d >= 123-k ? 25 : 0;
		cout<<(int) d;
		i++;
	}

	return 0;
}

