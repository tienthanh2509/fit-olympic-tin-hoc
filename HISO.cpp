#include <iostream>
#include <vector>

using namespace std;

int n = 0;
vector<int> A, L;

int main()
{
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		int input = 0;
		cin>>input;
		A.push_back(input);
	}

	int a = A[0], b = A[1];
	
	L.push_back(b-a);
	
	cout<<a<<" "<<b<<endl;

	for(int i = 2; i < n; i++)
	{
		if(A[i] > b)
			b = A[i];

		cout<<a<<" "<<b<<" | "<<A[i];
		
		if(A[i] < a)
		{
			L.push_back(b-a);
			a = A[i];
			b = A[i+1];
		}
		
		cout<<" || "<<a<<" "<<b<<" | "<<A[i];
		cout<<endl;
	}

	L.push_back(b-a);

	int maxL = L[0];
	for(int i = 1; i < L.size(); i++)
	{
		cout<<L[i]<<" ";
		if(L[i] > maxL)
			maxL = L[i];
	}
	cout<<endl;

	cout<<maxL;

	return 0;
}
