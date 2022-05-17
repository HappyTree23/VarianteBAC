#include <iostream>
using namespace std;
int main()
{
    int m, i, j, k, ok, s;
    int a[101][101];
    cin >> m;
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=m; j++)
        {
            s = i*i + j*j;
            ok = 1;
            for (k=2; k*k <= s && ok==1; k++)
                if (s%k == 0)
                    ok = 0;
            if (ok == 1)
                a[i][j] = 1;
            else
                if ((i+j) % 2 == 0 && (i+j) > 2)
                    a[i][j] = 2;
                else
                    a[i][j] == 0;
        }
    }

    for (i=1; i<=m; i++)
    {
        for (j=1; j<=m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
