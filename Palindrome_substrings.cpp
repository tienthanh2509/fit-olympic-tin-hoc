#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> B;
vector<string> S;
vector<string> R;
int n, len, p, c;

void Worker();
void Gen();
void Process();
bool KT_DoiXung(string str);
void Result();

void Worker() {
	B.clear();
	R.clear();
	c = 0;
	string _str = S.at(p);
	len = _str.length();

	for(int i = 0; i < len-1; i++)
	{
		B.push_back(0);
	}

	// Skip null string
	B.push_back(1);

	Gen();
	Result();
}

void Gen() {
	bool STOP = false;

	while(!STOP){
		Process();

		int i = len-1;
		while(B[i] == 1 && i >= 0)
		{
			B[i] = 0;
			i--;
		}

		if(i >= 0) B[i] = 1;
		else STOP = true;
	}
}

void Process() {
	string str = S.at(p);
	string str2;
	bool isStart = false;

	for(int i = 0; i < B.size(); i++) {
		if(isStart && !B.at(i))
			break;

		if(B.at(i))
		{
			isStart = true;
			str2.append(str, i, 1);
		}
	}

	if(KT_DoiXung(str2))
	{
		bool flag = true;
		for(int i = 0; i < R.size(); i++)
			if(R.at(i) == str2)
			{
				flag = false;
				break;
			}

		if(flag)
		{
			c++;
			R.push_back(str2);
			cout<<str2<<endl;
		}
	}
}

bool KT_DoiXung(string str)
{
	for(int i = 0, j = str.length()/2; i <= j; i++)
	{
		//cout<<str<<"\t"<<i<<"="<<str.at(i)<<" "<<str.length()-i-1<<"="<<str.at(str.length()-i-1)<<endl;
		if(str.at(i) != str.at(str.length()-i-1))
			return false;
	}

	//cout<<"---\n";

	return true;
}

void Result() {
	cout<<c<<endl;
}

int main() {
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		string str;
		cin>>str;
		S.push_back(str);
	}

	for(int i = 0; i < n; i++)
	{
		p = i;
		Worker();
	}

	return 0;
}
