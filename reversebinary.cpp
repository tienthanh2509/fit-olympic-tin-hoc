#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int n, s = 0;
vector<int> bin;

int main() {
	cin>>n;

	//
	while(n != 0)
	{
		bin.push_back(n%2);
		n /= 2;
	}

	for(int i = 0; i < bin.size(); i++)
	{
		//cout<<bin[i];
		if(bin[i] == 1)
			s += pow(2, bin.size() - i - 1);
	}
	
	cout<<s;

	return 0;
}
