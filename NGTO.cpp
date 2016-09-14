#include <iostream>
#include <math.h>

using namespace std;

long long n;

bool la_snt(long long x) {
	if(x < 2)
		return false;

	long long _t = sqrt(x);
	
	for(long long i = 2; i <= _t; i++)
		if(x%i == 0)
			return false;

	return true;
}

int main() {
	cin>>n;

	if(la_snt(n))
		cout<<"YES";
	else
		cout<<"NO";

    return 0;
}

