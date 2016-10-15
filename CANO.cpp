#include <iostream>
#include <math.h>
#include <queue>

using namespace std;

#define MAX_SIZE 50

struct dao {
	int x, y;
};

int n, m, v;
dao D[MAX_SIZE];
int A[MAX_SIZE][MAX_SIZE], PRE[MAX_SIZE], P[MAX_SIZE];
bool THAM[MAX_SIZE];

queue<int> q;

double khoangCach2(dao a, dao b)
{
	cout<<"("<<a.x<<","<<a.y<<") => ("<<b.x<<","<<b.y<<") = "<<pow(b.x - a.x, 2) + pow(b.y - a.y, 2)<<endl;
	return pow(b.x - a.x, 2) + pow(b.y - a.y, 2);
}

//10 3 1
//1 1
//2 3
//3 2
//4 1
//4 3
//3 6
//1 6
//5 4
//6 2
//1 7
void input()
{
	cin>>n>>m>>v;

	for(int i = 1; i <= n; i++)
		cin>>D[i].x>>D[i].y;

	int m2 = m*m;

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(khoangCach2(D[i], D[j]) <= m2)
				A[i][j] = A[j][i] = 1;
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
