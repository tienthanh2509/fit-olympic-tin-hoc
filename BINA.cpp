#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> bin;

int main() {
	cin>>n;

	if(n == 0)
	{
		cout<<0;
		return 0;
	}

	int m = n;
	while(m != 0)
	{
		bin.push_back(m%2);
		m /= 2;
	}

	for(int i = bin.size() - 1; i >= 0; i--)
		cout<<bin.at(i);

    return 0;
}

