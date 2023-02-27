#include <iostream.h>
class cl {
int i;
public:
void load_i(int val) { this->i = val; } // то же самое, что и i = val
int get_i() { return this->i; } // то же самое, что и return i
};
int main ()
{
cl o;
o.load_i(100);
cout << o.get_i();
return 0;
}
