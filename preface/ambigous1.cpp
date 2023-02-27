#include <iostream.h>
char myfunc (unsigned char ch);
char myfunc(char ch);
int main()
{
cout << myfunc('с'); // вызов myfunc(char)
cout << myfunc(88) << " "; // неопределенность
return 0;
}
char myfunc (unsigned char ch)
{
return ch-1;
}
char myfunc(char ch)
{
return ch+1;
}
