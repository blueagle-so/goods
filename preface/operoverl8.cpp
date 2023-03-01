#include <iostream.h>
#include <string.h>
class str_type {
char string[80];
public:
str_type(char *str = "\0") { strcpy(string, str); }
str_type operator+(str_type str); // конкатенация
str_type operator=(str_type str); // присвоение
// вывод строки
void show_str() { cout << string; }
};
// конкатенация двух строк
str_type str_type::operator+(str_type str) {
str_type temp;
strcpy(temp.string, string);
strcat(temp.string, str.string);
return temp;
}
// присвоение одной строки другой
str_type str_type::operator=(str_type str) {
strcpy(string, str.string);
return *this;
}

Использование данных определений иллюстрируется в функции main():

int main()
{
str_type a ("Hello "), b( "There"), c;
с = a + b;
с.show_str();
return 0;
}
