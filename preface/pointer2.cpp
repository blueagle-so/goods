#include <iostream.h>
void swap (int &a, int &b); // объявление в виде ссылок
int main()
{
int x, у;
x = 99;
у = 88;
cout << х << " " << у << "\n";
swap(x, у); // обмен значений
cout << х << " " << у << " \n";
return 0;
}
/* swap () определена с использованием передачи по ссылке, а не по значению */
void swap (int &а, int &b)
{
int t;
t = a;
a = b; // установка значения x
b = t; // установка значения у
}
