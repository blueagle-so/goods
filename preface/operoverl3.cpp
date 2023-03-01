#include <iostream.h>
class three_d {
int x, у, z; // трехмерные координаты
public:
friend three_d operator+ (three_d op1, three_d op2);
three_d operator=(three d op2); // op1 подразумевается
three_d operator++(); // op1 также подразумевается
void show ();
void assign (int mx, int my, int mz);
};
// дружественная функция
three_d operator+(three_d op1, three_d op2)
{
three_d temp;
temp.x = op1.x + op2.x; // целочисленное сложение
temp.у = op1.у + op2.y; // и в данном случае + сохраняет
temp.z = op1.z + op2.z; // первоначальное значение
return temp;
}
// перегрузка =
three_d three_d::operator=(three_d op2)
{
x = op2.x; // целочисленное присваивание
у = op2.y; // и в данном случае = сохраняет
z = op2.z; // первоначальное значение
return *this;
}
// перегрузка унарного оператора
three_d three_d::operator++()
{
х++;
у++;
z++;
return *this;
}
// вывод координат X, Y, Z
void three_d::show ()
{
cout << x << ", ";
cout << у << ", ";
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
с = a+b; // сложение а и b
c.show();
с = a+b+c; // сложение a, b и с
с.show ();
с = b = a; // демонстрация множественного присваивания
с.show();
b.show();
++c; // увеличение с
c.show();
return 0;
}
