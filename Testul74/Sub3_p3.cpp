#include <iostream> // remove
#include <fstream>
using namespace std;
ifstream fin("BAC.IN");
ofstream fout("BAC.OUT");
int main()
{
    int n, copie, c, i, nr;
    cin >> n; // fin
    for (i=1; i<=n; i++)
    {
        cin >> nr;
        c = 0;
        copie = nr;
        while (n)
        {
            n /= 10;
            c ++;
        }
        if (c == 4)
            cout << copie << endl;
    }
    return 0;
}

/*
6
23 1124 567 89013 5586 1200
*/
