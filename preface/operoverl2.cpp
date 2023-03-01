#include <iostream>
using namespace std;
class three_d {
int x, y, z; // трехмерные координаты
public:
three_d operator+(three_d op2); // op1 подразумевается
three_d operator=(three_d op2); // op1 подразумевается
three_d operator++ (); // op1 также подразумевается
void show();
void assign (int mx, int my, int mz);
};
// перегрузка +
three_d three_d::operator+(three_d op2)
{
three_d temp;
temp.x = x+op2.x; // целочисленное сложение
temp.y = y+op2.y; // и в данном случае + сохраняет
temp.z = z+op2.z; // первоначальное значение
return temp;
}
// перегрузка =
three_d three_d::operator=(three_d op2)
{
x = op2.x; // целочисленное присваивание
y = op2.y; // и в данном случае = сохраняет
z = op2.z; // первоначальное значение
return *this;
}
// перегрузка унарного оператора
three_d three_d::operator++()
{
x++;
y++;
z++;
return *this;
}
// вывести координаты X, Y, Z
void three_d::show()
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
++c; // увеличение с
c.show();
return 0;
}
