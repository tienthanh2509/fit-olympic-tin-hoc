#include <iostream>
#include <algorithm>

using namespace std;

int n;
int *tA, *tB;

int main()
{
	cin>>n;
	tA = new int[n];
	tB = new int[n];

	for(int i = 0; i < n; i++)
		cin>>tA[i];
	for(int i = 0; i < n; i++)
		cin>>tB[i];

	sort(tA, tA + n);
	sort(tB, tB + n);

	int i = 0, j = 0, c = 0;
	while(i < n)
	{
		if(tB[i] > tA[j])
		{
			j++;
			c++;
		}
		
		i++;
	}

	cout<<c;

	return 0;
}
