Sub 1
1) d
2) b
3) ~~c~~ a
4) b
5) b

Sub 2

1) 
  a) **3** 4 6 8 9 15
  
  b) (10, 3, 3); (10, 2, 2)
  
  c) 
  
  #include <iostream>
  using namespace std;
  int main()
  {
      int n,x,y,ok,i;
      cin >> n >> x >> y;
      ok = 0;
      for (i=1; i<=n; i++) {
        if (((i%x==0) && (i%y!=0)) || ((i%x!=0 && i%y==0))) {
            cout << i << ' ';
            ok = 1;
        }
      }
      if (ok == 0)
        cout << 0;
      return 0;
  }
  d) 
citeste n,x,y
ok<-0
cat timp i<=n executa ...
