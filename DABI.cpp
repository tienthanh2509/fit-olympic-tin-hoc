#include <iostream>

using namespace std;

int n = 0;
long long A = 0, s = 0, c = 0, l = 0;

int main() {
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		cin>>A;
		s += A;

		if(A%2 == 0)
			c++;
		else
			l++;
	}

	if(s%2 == 0)
		cout<<l*(l-1)/2 + c*(c-1)/2;
	else
		cout<<c*l;

    return 0;
}
