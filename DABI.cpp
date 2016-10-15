#include <iostream>

using namespace std;

long long n = 0, m = 0, s = 0;

int main() {
	cin>>n;

	m = n;

	while(m != 0)
	{
		s += m%10;
		m /= 10;
	}

	if(n%s == 0)
		cout<<1;
	else
		cout<<0;

    return 0;
}
