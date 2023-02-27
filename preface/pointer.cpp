#include <iostream.h>
int myfunc(int a);
int myfunc(int a, int b);
int main()
{
int (*fp) (int a); // указатель на int xxx(int)
fp = myfunc; // указывает на myfunc(int)
cout << fp(5);
return 0;
}
int myfunc (int a)
{
return a;
}
int myfunc (int a, int b)
{
return a*b;
}

Как показывает данная программа, fp объявлен как указатель на функцию, возвращающую целое число и имеющую один аргумент. С++ использует эту информацию, чтобы выбрать версию myfunc(int а) — версию функции myfunc(). Если бы fp было объявлено следующим образом:

int (*fp) (int a, int b);

