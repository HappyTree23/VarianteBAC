## Sub 1
1. c
2. ~~d~~ c
3. b
4. ~~b~~ d
5. b
6. d
7. ~~3210~~ 0123
8. 7 3 5

## Sub 2
1. 001
2. 8

3. 
```cpp
#include <iostream>
using namespace srd;
int main(0 {
  int n, i, p, j;
  for (i=1; i<=n; i++) {
    p=1;
    for (j=i; j>=2; j--)
      p=p*j
    cout << p/(i*2);
  }
  return 0;
}
```

4.
```
citeste n
+pentru i<-1,n executa
| p<-1
| daca i>=2
|   p<-i*(i+1)/2
| scrie [p/(i*2)]
+--@
```
