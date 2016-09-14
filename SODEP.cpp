#include <iostream>

using namespace std;

int tongChuSo(int x)
{
	int s = 0;

	while(x != 0)
	{
		s += x%10;
		x /= 10;
	}

	return s;
}

int main() {
	int n;
	cin>>n;

	if(tongChuSo(n)%10 == 9)
		cout<<"YES";
	else
		cout<<"NO";

    return 0;
}

