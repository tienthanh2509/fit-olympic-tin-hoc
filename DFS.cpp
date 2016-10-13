#include <iostream>

using namespace std;

// N C V0
//8 13 1
//1 3
//1 2
//2 3
//2 4
//3 4
//3 7
//4 5
//5 2
//5 6
//6 8
//7 4
//7 6
//8 7

#define MAX_SIZE 50

int n, c, v;
int M[MAX_SIZE][MAX_SIZE], PRE[MAX_SIZE];
int dau, cuoi, Q[MAX_SIZE];
bool THAM[MAX_SIZE];

void Init();
void Process();
void Result();

void Init(){
	cin>>n>>c>>v;

	dau = cuoi = 0; // Q rong

	for(int i = 1; i < MAX_SIZE; i++)
	{
		THAM[i] = false;
		Q[i] = v;
		PRE[i] = v;
		for(int j = 0; j < MAX_SIZE; j++)
			M[i][j] = 0;
	}

	THAM[v] = true;
	PRE[v] = 0;
	Q[++cuoi] = v;

	for(int i = 0; i < c; i++)
	{
		int _d, _c;
		cin>>_d>>_c;
		M[_d][_c] = 1;
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			cout<<M[i][j]<<" ";
		cout<<endl;
	}
}

void Process(){
	while(dau <= cuoi) // Q khac rong
	{
		int u = Q[dau++];
		//cout<<u;
		for(int _v = 1; _v <= n; _v++)
		{
			if(M[u][_v] == 1 && !THAM[_v])
			{
				cout<<u<<"->"<<_v<<endl;
				Q[++cuoi] = _v;
				PRE[_v] = u;
				THAM[_v] = true;
			}
		}
	}
}

void Result(){
	for(int i = 1; i <= n; i++)
	{
		if(!THAM[i])
		{
			//cout<<"Khong co duong di"<<endl;
			continue;
		}

		int P[MAX_SIZE], _i = 0;
		P[0] = i;
		while(P[_i] != v)
		{
			_i++;
			P[_i] = PRE[P[_i-1]];
		}

		for(int j = _i; j > 0; j--)
			cout<<P[j]<<"->";
		cout<<P[0]<<endl;
	}
}

int main() {
	Init();
	Process();
	Result();

	return 0;
}
