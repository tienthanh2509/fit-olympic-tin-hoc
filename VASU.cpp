#include <iostream>
#include <algorithm>

using namespace std;

int n = 0;
int A[100];
int kq = 0;

int main() {
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>A[i];

    sort(A, A+n);

    for(int j = n-1; j >= 0; j--)
    {
        int v = A[j] - (n-j-1);
        if(v <= 0)
            break;
        kq += v;
    }
    cout<<kq<<endl;

    return 0;
}
