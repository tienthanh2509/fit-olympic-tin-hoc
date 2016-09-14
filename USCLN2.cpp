#include <iostream>

using namespace std;

long long a, b, x, y, t;

int main() {
	cin>>a>>b;

	x = b;
	y = a;
	while(y != 0)
	{
		t = x % y;
		x = y;
		y = t;
	}

	cout<<x;

    return 0;
}
