#include <iostream>

using namespace std;

int main()
{
	short h = 0, p = 0, s = 0;
	cin>>h>>p>>s;

	s++;

	if(s>59)
	{
		s = 0;
		p++;

		if(p>59)
		{
			p = 0;
			h++;

			if(h>23)
				h = 0;
		}
	}

	cout<<h<<" "<<p<<" "<<s;

	return 0;
}
