#include <iostream>
#include <map>

using namespace std;

map<int, int> xe;
map<int, int>::iterator it;
int s = 0;

void input()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        int soxe;
        cin>>soxe;
        xe[soxe]++;
    }
}

void process()
{
    for(it = xe.begin(); it != xe.end(); it++)
    {
        if(it->second <= 5)
        {
        	s += 100;
        }
        else
        {
            s += 100 + (it->second - 5);
        }
    }
}

void output()
{
	cout<<s<<endl;
}

int main()
{
    input();
    process();
    output();

    return 0;
}
