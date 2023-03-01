#include <iostream.h>
class atype {
int a[3];
public:
atype (int i, int j, int k) {
a[0] = i;
a[1] = j;
a[2] = k;
}
int &operator[] (int i) { return a[i]; }
};
int main()
{
atype ob(1, 2, 3);
cout << ob[1]; // выводит 2
cout << " ";
ob[1] = 25; // [] слева от =
cout << ob[1]; // выводит 25
return 0;
}
