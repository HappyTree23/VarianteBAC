#include <iostream>
using namespace std;
int main () {
    int a[1000];
    int n,i;
    cin >> n;

    for (i=1; i<=n/2; i++) {
        a[i]=2*i-1;
        a[n-i+1]=2*i;
    }
    if (n%2!=0)
        a[n/2+1] = n;
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
    return 0;
}
