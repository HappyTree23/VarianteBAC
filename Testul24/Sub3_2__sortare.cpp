#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.TXT");
int main() {
    char s[2001], aux;
    int i;
    bool ok;
    fin.getline(s, 2001);
    do {
        ok = 1;
        for (i=1; i<=20; i++) {
            if (s[i-1] < s[i]) {
                aux = s[i-1];
                s[i-1] = s[i];
                s[i] = aux;
                ok = 0;
            }
        }
    } while(!ok);
    cout << s;
    fin.close();
    return 0;
}
