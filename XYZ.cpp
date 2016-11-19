#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> thuebao;
map<string, int>::iterator it;

int doiGiay(int a)
{
	int time = 0;
	int tam = 0;

	time = a%100;
	a /= 100;

	time += (a%100)*60;
	a /= 100;

	time += a*3600;

	return time;
}

int soSanhThoiGian(int a, int b)
{
	a = doiGiay(a);
	b = doiGiay(b);
	
	if(a > b)
		b += 86400;
	
	return b - a;
}

void input()
{
    string std1, std2;
    int n, a, b;
    
    cin>>n;
    for(int i = 0; i < n; i++)
    {
    	cin>>std1>>std2>>a>>b;
    	
    	int tg = soSanhThoiGian(a, b);
    	thuebao[std1] += tg*2;
    	thuebao[std2] += tg;
    }
}

void process()
{
	//
}

void output()
{
	it = thuebao.begin();
	int max = it->second;
	it++;

	for(; it != thuebao.end(); it++)
		if(it->second > max)
			max = it->second;
			
	cout<<max<<endl;
}

int main()
{
    input();
    process();
    output();

    return 0;
}
