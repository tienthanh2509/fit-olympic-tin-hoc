#include <iostream>

using namespace std;

int main()
{
	long n = 0, m = 0, s = 0;
	cin>>n;

	m = n;
	while(m != 0)
	{
		s += m%10;
		m /= 10;
	}

	if(s == 9 || s%10 == 9)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}

