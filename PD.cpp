#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 100

int b[MAX][MAX], chuaxet[MAX], dst[MAX], u;
vector<int> unchecked;
int n;
int c = 0;

void init ()
{
   	n = 0;
	do {
		int _d, _c;
		cin >> _d;
		cin >> _c;
		if (_d == 0) {
			break;
		}
		if (n < _d) {
			n = _d;
		}
		if (n < _c) {
			n = _c;
		}
		b[_c][_d] = 1;	
	} while(true);
}

void reset() {
	for(int i = 1; i <= n; i++) {
		dst[i] = 0;
		//chuaxet[i] = 1;
		unchecked.push_back(i);
	}
}

bool finish() {
	for(int i = 1; i <=n ; i++) {
		if (chuaxet[i])
			return false;
	}
	return true;
}

int BFS(int b[][MAX], int u, int v)
{
	queue <int> a;
    a.push(u);                // nhap dinh vao queue
    chuaxet[u] = 0;          // danh dau dinh nay da duoc xet
    do   // chung nao queue con trong con thuc hien
    {
          int x = a.front();  // gan x = dinh cuoi cua queue
          a.pop();            // xoa dinh kho queue
          for (auto j = unchecked.begin(); j != unchecked.end(); j++)    // vong for tim cac dinh ke voi x
            if (b[x][*j] == 1 && chuaxet[*j]) // neu dinh j ke voi x va i chua duoc xet thi
            {
           		if (*j == v) {
           			c++;
           			dst[*j]++;
				}
                a.push(*j);         // them j vao queue
                //chuaxet[j] = 0;        // danh dau j da duoc xet
                unchecked.erase(j);
            }
        if (find((unchecked.begin(), unchecked.end(), v) == unchecked.end())
        	dst[v]++;
        else if (unchecked.empty())
        	break;
    } while(!a.empty());
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    	sum += dst[i];
    return sum;
}
int main (){
	int t;
	cin >> t;
    int sum = 0;
    for (int test = 0; test < t; ++test) {
    	init();
	    for (int i = 1; i <= n; ++i) {
	    	for (int j = 1; j <= n; ++j) {
	    		if (i == j)
	    			continue;
	    		reset();
	    		sum += BFS(b, i, j);
			}
		}
	}
	cout.precision(4);
	cout << (double)sum / c;
    return 0;
}
