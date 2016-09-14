#include <iostream>

using namespace std;

int tongUC(int x) {
	int s = 1;
	int _t = x/2;

	for(int i = 2; i <= _t; i++)
		if(x%i == 0)
			s += i;

	return s;
}

int main() {
	int a, b;
	cin>>a>>b;

	if(tongUC(a) == b && tongUC(b) == a)
		cout<<"YES";
	else
		cout<<"NO";

    return 0;
}

