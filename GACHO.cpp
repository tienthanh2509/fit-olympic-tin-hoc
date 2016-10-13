#include <iostream>

using namespace std;

int a, b;

int main() {
	cin>>a>>b;

	int y = (b - 2*a)/2;
	int x = a - y;

	if(x >= 0 && y >= 0 && x + y == a && 2*x + 4*y == b)
		cout<<x<<" "<<y;
	else
		cout<<-1;

    return 0;
}

