#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int *step = new int[n];

	for(int i = 0; i < n; i++)
		cin>>step[i];

	int s = 0;
	for(int i = 0; i < n; i++)
		if(step[i] == 1)
			s -= 1;
		else
			s += 1;

	cout<<abs(s);

    return 0;
}

