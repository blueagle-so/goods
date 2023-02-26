#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

typedef ostream &(*PTF) (ostream &, int, int, char);
class MyManip
{
public:
  // конструктор
  MyManip(PTF F, int W, int N, char FILL)
  : f(F), 
    w(W), 
    n(N), 
    fill(FILL)
  {}

protected:
  int w;
  int n;
  char fill;
  PTF f;

friend ostream &operator <<(ostream &, MyManip);
};

ostream &operator <<(ostream &out, MyManip my)
{
  return my.f(out, my.w, my.n, my.fill);
}
ostream &fmanip(ostream &s, int w, int n, char fill)
{
  s.width(w);
  s.flags(ios::fixed);
  s.precision(n);
  s.fill(fill);
  return s;
}

MyManip wp(int w, int n, char fill)
{
  return MyManip(fmanip, w, n, fill);
}
int main(){



}
