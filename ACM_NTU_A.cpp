#include <iostream>
#include <map>

using namespace std;

int t, n;
map<float, int> nghiem;

void input()
{
	cin>>n;
	nghiem.clear();
}

void process()
{
	for(int i = 0; i < n; i++)
	{
		float a = 0, b = 0, c = 0;

		cin>>a>>b;

		if(a == 0) continue;

		c = b/a;

		nghiem[c] = 1;
	}
}

void output()
{
	cout<<nghiem.size()<<endl;
}

int main()
{
	cin>>t;

	for(int i = 0; i < t; i++)
	{
		input();
		process();
		output();
	}

	return 0;
}

