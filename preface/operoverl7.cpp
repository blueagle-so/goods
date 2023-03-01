// пример безопасного массива
#include <iostream.h>
#include <stdlib.h>
class atype {
int a[3];
public:
atype (int i, int j, int k) {
a[0] = i;
a[1] = j;
a[2] = k;
}
int &operator[] (int i);
};
// проверка диапазона для atype.
int &atype::operator [] (int i)
{
if (i<0 | | i>2) {
cout << "Boundary Error\n";
exit (1);
}
return a[i];
}
int main()
{
atype ob(1, 2, 3);
cout << ob[1]; // выводит 2
cout << " ";
ob[1] = 25; // [] слева
cout << ob[1]; // выводит 25
ob[3] = 44; // генерируется ошибка времени выполнения, поскольку 3 выходит за допустимые пределы
return 0;
}
