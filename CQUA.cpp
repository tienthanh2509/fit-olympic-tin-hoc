#include <iostream>

using namespace std;

int n, *A, T = 0, S = 0;

void sortDesc()
{
	for(int i = 0; i < n-1; i++)
	{
		int max = i;

		for(int j = i+1; j < n; j++)
			if(A[max] < A[j])
				max = j;

		//
		int _sw = A[i];
		A[i] = A[max];
		A[max] = _sw;
	}
}

int main() {
	cin>>n;
	A = new int[n];

	for(int i = 0; i < n; i++)
		cin>>A[i];

	sortDesc();

//	for(int i = 0; i < n; i++)
//		cout<<A[i]<<" ";

	for(int i = 0; i < n; i++)
		if(T > S)
			S += A[i];
		else
			T += A[i];

	if(T == S)
		cout<<"YES";
	else
		cout<<"NO";

    return 0;
}

