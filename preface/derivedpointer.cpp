#include <iostream.h>
#include <string.h>
class B_class {
char name[80];
public:
void put_name(char *s) {strcpy(name, s); }
void show_name() {cout << name << " "; }
};
class D_class: public B_class {
char phone_num[80];
public:
void put_phone (char *num) {
strcpy (phone_num, num);
}
void show_phone() {cout << phone_num << "\n"; }
};
int main()
{
B_class *p;
B_class B_ob;
D_class *dp;
D_class D_ob;
p = &B_ob; // адрес базового
// доступ к B_class через указатель
p->put_name ("Thomas Edison");
// доступ к D_class через указатель
р = &D_ob;
p->put_name ("Albert Einstein");
// показать каждое имя соответствующего объекта
B_ob.show-name();
D_ob. showname();
cout << "\n";
/* поскольку put_phone и show_phone не являются частью базового класса, они не доступны через указатель на базовый класс и доступ должен осуществляться или напрямую, или, как показано ниже, через указатель на порожденный класс */
dp = &D_ob;
dp->put_phone("555 555-1234");
p->show_name(); // в данной строке могут использоваться или р, или dp
dp->show_phone();
return 0;
}
