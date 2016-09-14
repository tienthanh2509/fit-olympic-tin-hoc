#include <iostream>
#include <math.h>

using namespace std;

int n;
long long s;

long long giaiThua(int x) {
	s = 1;
	for(int i = 2; i <= x; i++)
		s *= i;

	return s;
}

int main() {
	cin>>n;

	cout<<giaiThua(n);

    return 0;
}

