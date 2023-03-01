#include <iostream.h>
void swap(int *a, int *b);
int main ()
{
int x, y;
x = 99;
у = 88;
cout << x << " " << у << "\n";
swap(&x, &y); // обмен значений
cout << x << " " << у << "\n";
return 0;
}
// версия swap(), явно использующая указатели
void swap (int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
