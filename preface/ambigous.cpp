#include <iostream.h>
float myfunc(float i);
double myfunc(double i);
int main()
{
cout << myfunc (10.1) << " "; // неопределенности нет, вызов myfunc(double)
cout << myfunc(10); // неопределенность
return 0;
}
float myfunc (float i)
{
return i;
}
double myfunc(double i)
{
return -i;
}
