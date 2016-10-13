#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int n, pmax = 0, cmax = 0;

int main() {
	for(int i = 0; i < 5; i++)
	{
		int _c = 0;
		for(int j = 0; j < 4; j++)
		{
			int _d;
			cin>>_d;
			_c += _d;
		}

		if(cmax < _c)
		{
			pmax = i;
			cmax = _c;
		}
	}

	cout<<pmax+1<<" "<<cmax;

	return 0;
}
