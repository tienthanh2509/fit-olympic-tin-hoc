#include <iostream>
#include <vector>

using namespace std;

int MAX = 10000000, n, dem;
vector<int> SNT;
bool *A;

int main() {
	cin>>n;

	A = new bool[MAX+1];

	for(int i = 2; i <= MAX; i++)
		A[i] = true;

    for(int i = 2; i <= MAX; i++)
    {
    	if(A[i] == 1)
    	{
    		cout<<i<<" ";

    		for(int j = 2; i*j <= MAX; j++)
    			A[i+j] = false;
		}
	}

    return 0;
}

