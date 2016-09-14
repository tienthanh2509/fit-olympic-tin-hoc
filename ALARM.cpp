#include <iostream>

using namespace std;

int main()
{
    //            0  1  2  3  4  5  6  7  8  9
    int led[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    int n;
    cin >> n;

    if (n < 8)
    {
        cout << "Impossible";
        return 0;
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 5; k++)
                for (int l = 0; l <= 9; l++)
                    if (led[i] + led[j] + led[k] + led[l] == n)
                    {
                        cout << i << j << ":" << k << l;
                        return 0;
                    }

    cout << "Impossible";

    return 0;
}
