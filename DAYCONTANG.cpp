#include <iostream>

using namespace std;

#define MAX_ARRAY 100

int n, k;
int A[MAX_ARRAY], F[MAX_ARRAY], PRE[MAX_ARRAY], C[MAX_ARRAY], c;

void process() {
	// B1:
	F[0] = 1;
	for(int i = 0; i < n; i++)
		PRE[i] = 0;

	// B2:
	for(int i = 1; i <= n-1; i++)
	{
		F[i] = 1;
		k = i;
		int max = 0;

		for(int j = i - 1; j > 0; j--)
			if(F[j] > max && A[i] > A[j])
			{
				max = F[j];
				k = j;
			}

		if(k != i)
		{
			F[i] = max+1;
			PRE[i] = k;
		}
	}

	// B3:
	int k = 0;

	// Kmax trong F
	for(int i = 1; i <= n - 1; i++)
		if(F[i] > F[k])
			k = i;


	//
//	for(int i = 0; i < n; i++)
//		cout<<A[i]<<" ";
	cout<<endl;
	for(int i = 0; i < n; i++)
		cout<<F[i]<<" ";
	cout<<endl;
	for(int i = 0; i < n; i++)
		cout<<PRE[i]<<" ";
	cout<<endl;
	cout<<k;
	cout<<endl;

	int c = -1;
	while(k > 0)
	{
		C[++c] = A[k];
		k = PRE[k];
	}
	
	for(int i = c; i >= 0; i--)
		cout<<C[i]<<" ";
}


//10
//5 3 1 4 7 9 6 8 2 10
int main() {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>A[i];

	process();

    return 0;
}

