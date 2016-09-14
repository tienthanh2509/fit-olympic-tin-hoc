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
//	for(int i = 0; i < 10; i++)
//	{
//		// Hacking array index
//		int j = i+1;
//		cout<<j<<" - "<<fibonacci(j)<<endl;
//	}

	cin>>n;
	for(int i = 0; i < n; i++)
	{
		int input;
		cin>>input;
		F.push_back(input);
	}

	cout<<endl<<n<<endl;

	for(int i = 0; i < n; i++)
	{
		//cout<<i<<"-"<<F.at(i)<<"-"<<F.at(i)<<"-"<<fibonacci(F.at(i))<<endl;
		cout<<fibonacci(F.at(i))<<endl;
	}

	return 0;
}
