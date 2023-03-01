#include <iostream.h>
int main()
{
int j, k;
int &i = j; // независимая ссылка на j
j = 10;
cout << j << " " << i; // выводит 10 10
k = 121;
i = k; // копирование значения, а не адреса k в j
cout << "\n" << j; // выводит 121
return 0;
}
