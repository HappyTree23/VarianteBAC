#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.TXT");
int main() {
    char s[2001];
    int i,k;
    int f[10]={0};
    fin.getline(s, 2001);
    for (i=1; i<=20; i++) {
        f[s[i] - '0'] ++;
    }
    k=0;
    for (i=9; i>=0; i--) {
        while (f[i]>0) {
            s[k] = i + '0';
            k++;
            f[i]--;
        }
    }
    cout << s;
    return 0;
}
