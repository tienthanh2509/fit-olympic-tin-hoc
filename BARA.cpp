#include <iostream>

using namespace std;

int main()
{
	int n = 0, k = 0, t = 0;
	cin>>n>>k;

	if(k >= n)
	{
		cout<<10;
		return 0;
	}

	n *= 2;
	t = (n/k)*5;

	if(n%k != 0) t += 5;

	cout<<t;

	return 0;
}

