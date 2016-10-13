#include <iostream>
#include <math.h>

using namespace std;

int n;
int *tA, *tB;

void Short(int T[])
{
	for(int i = 0; i < n-1; i++)
	{
		int min = i;
		
		for(int j = i+1; j < n; j++)
			if(T[min] > T[j])
				min = j;

		// Swap
		if(min == i)
			continue;
		int tam = T[i];
		T[i] = T[min];
		T[min] = tam;
	}
}

int main()
{
	cin>>n;
	tA = new int[n];
	tB = new int[n];

	for(int i = 0; i < n; i++)
		cin>>tA[i];
	for(int i = 0; i < n; i++)
		cin>>tB[i];

	Short(tA);Short(tB);
	int max = tA[n-1];
	for(int i = n-1; i > 0; i--)
	{
		tA[i] = tA[i-1];
	}
	tA[0] = max;

	int c = 0;
	for(int i = 0; i < n; i++)
		if(tA[i] < tB[i])
			c++;

	cout<<c;

	return 0;
}
