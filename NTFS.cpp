#include <iostream>

using namespace std;

long long n = 0;

int main() {
	cin>>n;

	int i = 0;
	while(++i*4096 < n);

	cout<<i*4;

    return 0;
}
