/ / расширение строкового типа
#include <iostream.h>
#include <string.h>
class str_type {
char string[80];
public:
str_type(char *str = "\0") { strcpy(string, str); }
str_type operator+(str_type str);
str_type operator+(char *str);
str_type operator= (str_type str);
str_type operator=(char *str);
void show_str() { cout  << string; }
};
str_type str_type::operator+(str_type str) {
str_type temp;
strcpy(temp.string, string);
strcat(temp.string, str.string);
return temp;
}
str_type str_type::operator= (str_type str) {
strcpy(string, str.string);
return *this;
}
str_type str_type::operator=(char *str)
{
str_type temp;
strcpy(string, str);
strcpy(temp.string, string);
return temp;
}
str_type str_type::operator+ (char *str)
{
str_type temp;
strcpy(temp.string, string);
strcat (temp.string, str);
return temp;
}
int main()
{
str_type a("Hello "), b("There"), c;
с = a + b;
с.show_str();
cout << "\ n ";
a = "to program in because";
a.show_str();
cout << "\ n ";
b = с = "С++ is fun";
с = c+" "+a+" "+b;
с.show_str();
return 0;
}
