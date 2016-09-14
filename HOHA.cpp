#include <iostream>

using namespace std;

int main()
{
	long long n;

//	if(n < 2)
//	{
//		cout<<"NO";
//		return 0;
//	}

	cin>>n;

	long c = n/2;
	long long s = 0;
	for(int i = 1; i <= c; i++)
		if(n%i == 0)
			s+= i;

	if(s == n)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
