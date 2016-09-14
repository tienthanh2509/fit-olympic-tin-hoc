#include <iostream>

using namespace std;

int a, b;

bool la_snt(int x) {
	if(x < 2)
		return false;

	for(int i = 2; i <= x/2; i++)
		if(x%i == 0)
			return false;

	return true;
}

int main() {
	cin>>a>>b;

	for(int i = a; i <= b; i++)
		if(la_snt(i))
			cout<<i<<endl;
}
