#include <iostream>
#include <queue>

using namespace std;

#define MAX_SIZE 50

struct canh {
	int x, y;
};

int n, c, v;
canh C[MAX_SIZE];
int A[MAX_SIZE][MAX_SIZE], PRE[MAX_SIZE], P[MAX_SIZE];
bool THAM[MAX_SIZE];

queue<int> q;

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
void input()
{
	cin>>n>>c>>v;

	for(int i = 1; i <= c; i++)
	{
		cin>>C[i].x>>C[i].y;
		A[C[i].x][C[i].y] = 1;
		//cout<<"("<<C[i].x<<","<<C[i].y<<")\n";
	}
}

void init()
{
	for(int i = 1; i <= n; i++)
	{
		THAM[i] = false;
		PRE[i] = v;
	}

	PRE[v] = 0;
	THAM[v] = true;
	q.push(v);
}

void process()
{
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		cout<<u<<":";
		for(int i = 1; i <= n; i++)
		{
			if(A[u][i] == 1 && !THAM[i])
			{
				q.push(i);
				THAM[i] = true;
				PRE[i] = u;
				cout<<" "<<i;
			}
		}
		cout<<endl;
	}
}

void output()
{
	cout<<"THAM: ";
	for(int i = 1; i <= n; i++)
		cout<<THAM[i]<<" ";
	cout<<"\n";
	cout<<"   P: ";
	for(int i = 1; i <= n; i++)
		cout<<PRE[i]<<" ";
	cout<<"\n\n";
	///////////////////////////////

	for(int i = 1; i <= n; i++)
	{
		cout<<v<<" -> "<<i<<": ";
	
		if(!THAM[i])
			cout<<"Khong co duong di"<<endl;
		else
		{
			int j = 0;
			P[0] = i;

			while(P[j] != v)
			{
				j++;
				P[j] = PRE[P[j-1]];
			}

			for(int k = j; k > 0; k--)
				cout<<P[k]<<" ";
			cout<<P[0]<<endl;
		}
	}
}

int main()
{
	input();
	cout<<"--------------------------------\n\n";
	init();
	process();
	cout<<"--------------------------------\n\n";
	output();
}
