#include <iostream.h>
class CL {
public:
int count;
CL operator=(int i);
friend CL operator+(CL ob, int i);
friend CL operators+(int i, CL ob);
};
CL CL::operator=(int i)
{
count = i;
return *this;
}
// обрабатывает ob + int.
CL operator+ (CL ob, int i)
{
CL temp;
temp.count = ob.count + i;
return temp;
}
// обрабатывает int + ob.
CL operator+ (int i, CL ob)
{
CL temp;
temp.count = ob.count + i;
return temp;
}
int main()
{
CL obj;
obj = 10;
cout << obj.count << " "; // выводит 10
obj = 10 + obj; // прибавление объекта к целому
cout << obj. count << " "; // выводит 20
obj = obj + 12; // прибавление целого к объекту
cout << obj.count; // выводит 32
return 0;
}
