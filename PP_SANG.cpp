#include <iostream>
#include <vector>

using namespace std;

int MAX = 10000000, n;
vector<int> SNT;
bool *A;

int main() {
	//n = 30;
	cin>>n;

	A = new bool[MAX+1];

	for(int i = 2; i <= MAX; i++)
		A[i] = true;

    for(int i = 2; i <= n; i++)
    {
    	if(A[i] == 1)
    	{
    		SNT.push_back(i);

    		for(int j = 2; i*j <= n; j++)
    			A[i+j] = false;
		}
	}

	for(int i = 0; i < SNT.size(); i++)
		cout<<SNT[i]<<" ";

    return 0;
}

