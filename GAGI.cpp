#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b;
	cin>>a>>b;

	int i = 0;
	for(; pow(2, i)*a <= b; i++);
	//	cout<<pow(2, i)<<"*"<<a<<"="<<pow(2, i)*a<<" <= "<<b<<endl;

	cout<<i-1;

    return 0;
}

