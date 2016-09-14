#include <iostream>

using namespace std;

int main() {
	int n, a, b, c;

	cin>>n;

	a = 7;
	b = 0;
	c = 1;

	for(int i = 0; i < n; i++)
	{
		if(a == 7 || b == 7)
			c *= -1;

		a += c;
		b -= c;
		//cout<<a<<" "<<b<<endl;
	}
	
	cout<<a<<" "<<b;

    return 0;
}

