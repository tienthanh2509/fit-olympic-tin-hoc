#include <iostream>

using namespace std;

#define INFINITY 1000
#define SIZE 51

int C[SIZE][SIZE], n, v, k;
int D[SIZE], PRE[SIZE];
bool XET[SIZE];

//8 1
//4 1 0 0 0 0 0
//2 0 7 9 0 0
//8 4 0 0 0
//2 0 9 0
//5 0 0
//3 5
//11

void init() {
	cin>>n>>v;

	for(int i = 1; i < n; i++)
	{
		for(int j = i+1; j <= n; j++)
		{
			cin>>C[i][j];

			if(C[i][j] == 0)
				C[i][j] = INFINITY;

			C[j][i] = C[i][j];
		}
	}

	// ------------------

	for(int i = 1; i <= n; i++)
	{
		XET[i] = 0;
		PRE[i] = v;
		D[i] = INFINITY;
	}
	
	// ------------------
	XET[v] = 1;
	PRE[v] = 0;
	for(int i = 1; i <= n; i++)
		D[i] = C[v][i];
	D[v] = 0;
	k = 1;
}

void printDebug() {
	cout<<"----------\n";
	cout<<"C[]:\n";
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			if(C[i][j] == INFINITY)
				cout<<0<<" ";
			else
				cout<<C[i][j]<<" ";

		cout<<endl;
	}
	cout<<"----------\n";
}

void process() {

	while(k != n)
	{
		int min = INFINITY;
		int u;
		for(int i = 1; i <= n; i++)
			if(min > D[i] && !XET[i])
			{
				min = D[i];
				u = i;
			}

		cout<<"Xet "<<u<<endl;
		XET[u] = 1;
		k++;

		for(int i = 1; i <= n; i++)
			if(C[u][i] != INFINITY && !XET[i] && D[i] > D[u] + C[u][i])
			{
				cout<<"    ->"<<i<<" "<<D[i]<<" > "<<(D[u] + C[u][i])<<endl;
				D[i] = D[u] + C[u][i];
				PRE[i] = u;
			}

	}
}

void result() {
//	for(int u = 1; u <= n; u++)
//		cout<<PRE[u]<<" ";
//	cout<<endl;
	cout<<"----------\n";
	for(int u = 1; u <= n; u++)
		if(u != v)
		{
			int P[SIZE], i = 0;
			P[0] = u;
			while(P[i] != v)
			{
				i++;
				P[i] = PRE[P[i-1]];
			}
		
			cout<<v<<"->"<<u<<": D="<<D[u]<<" | ";
			for(int j = i; j > 0; j--)
				cout<<P[j]<<"->";
			cout<<P[0]<<endl;
		}
}

int main() {
	init();

	printDebug();

	process();

	result();

	return 0;
}
