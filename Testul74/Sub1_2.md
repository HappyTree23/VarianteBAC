## Sub 1
1. -
2. c
3. c
4. c
5. c
6. a
7. c
8. b

## Sub 2
1. 54321
2. 722, 2451, 4, 83
3.
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n, s, nr, i, x;
    s = 0;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> x;
        nr = x%10;
        while (x>9)
        {
            nr *= 10;
            x /= 10;
        }
        s += nr;
    }
    cout >> s;
    return 0;
}
```
4. 
```
s <- 0
citeste n
_pentru i <- 1,n executa
|	citeste x
|	nr <- x%10
|	_repeta
|	|	daca x>9 atunci
|	|	|	nr <- nr*10
|	|	|	x <- [x/10]
|	|	|_@
|	|_pana cand x<=9
|	s <- s + nr
|_@
```
