#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i = 0; i < n; i++)
   {
   		int m = n-i;
   		for(int j = 0; j < m; j++) {
   			cout<<"*";
		}
		cout<<endl;
   }

   return 0;
}
