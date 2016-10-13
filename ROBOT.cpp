#include <iostream>

using namespace std;

int n = 0, r = 0;

int main() {
	cin>>n;

	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	cin>>x2>>y2;

	for(int i = 1; i < n; i++)
	{
		cin>>x1>>y1;

		// L U R D
		//{-1, 0, 1, 0};
		//{0, 1, 0, -1};
		if((x1-x2 == 1) && (y1-y2 == 0))
				r++;

		x2 = x1;
		y2 = y1;
	}

	cout<<r;

    return 0;
}

