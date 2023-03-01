// небольшой пример использования виртуальных функций
#include <iostream.h>
class Base {
public:
virtual void who() { // определение виртуальной функции
cout << *Base\n";
}
};
class first_d: public Base {
public:
void who() { // определение who() применительно к first_d
cout << "First derivation\n";
}
};
class seconded: public Base {
public:
void who() { // определение who() применительно к second_d
cout << "Second derivation\n*";
}
};
int main()
{
Base base_obj;
Base *p;
first_d first_obj;
second_d second_obj;
p = &base_obj;
p->who(); // доступ к who класса Base
p = &first_obj;
p->who(); // доступ к who класса first_d
p = &second_ob;
p->who(); // доступ к who класса second_d
return 0;
}
