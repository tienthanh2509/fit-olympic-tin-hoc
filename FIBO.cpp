#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> F;

// 1  2  3  4  5  6
// 1, 1, 2, 3, 5, 8 ...
int fibonacci(int p) {
	if(p < 1)
		return 0;
	if(p < 3)
		return 1;

	return fibonacci(p-1) + fibonacci(p-2);
}

int main()
{
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		// Hacking array index
		int j = i+1;
		cout<<fibonacci(j);

		if(i < n)
			cout<<" ";
	}

	return 0;
}
