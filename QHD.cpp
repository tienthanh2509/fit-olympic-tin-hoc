// To hop chap k cua n phan tu
#include <iostream>

using namespace std;

int n, k;
long M[100][100];

int main() {
	cin>>n>>k;

	for(int i = 0; i < 100; i++)
	{
		M[i][0] = 1;
		M[i][i] = 1;
	}

	for(int i = 2; i < 100; i++)
	{
		for(int j = 1; j < i; j++)
		{
			M[i][j] = M[i-1][j-1]+M[i-1][j];
		}
	}

	cout<<M[n][k];

    return 0;
}

