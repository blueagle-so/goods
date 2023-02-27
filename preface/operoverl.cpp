#include <iostream>
using namespace std;
class three_d {
int x, y, z; // трехмерные координаты
public:
three_d operator+(three_d t);
three_d operator=(three_d t);
void show ();
void assign (int mx, int my, int mz);
};
// перегрузка +
three_d three_d::operator+(three_d t)
{
three_d temp;
temp.x = x+t.x;
temp.y = y+t.y;
temp.z = z+t.z;
return temp;
}
// перегрузка =
three_d three_d::operator=(three_d t)
{
x = t.x;
y = t.y;
z = t.z;
return *this;
}
// вывод координат X, Y, Z
void three_d::show ()
{
cout << x << ", ";
cout << y << ", ";
cout << z << "\n";
}
// присвоение координат
void three_d::assign (int mx, int my, int mz)
{
x = mx;
y = my;
z = mz;
}
int main()
{
three_d a, b, c;
a.assign (1, 2, 3);
b.assign (10, 10, 10);
a.show();
b.show();
c = a+b; // сложение а и b
c.show();
c = a+b+c; // сложение a, b и с
c.show();
c = b = a; // демонстрация множественного присваивания
c.show();
b.show ();
return 0;
}
