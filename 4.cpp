#include <iostream.h>
#include <iomanip.h>
// отступ на указанное число пробелов
ostream &indent(ostream &stream, int length)
{
register int i;
for (i=0; i<length; i++) cout << " ";
return stream;
}
omanip<int> indent(int length)
{
return omanip<int>(indent, length);
}
int main()
{
cout << indent (10) << "This is a test\n";
cout << indent (20) << "of the indent manipulator. \n";
cout << indent (5) << "It works! \n";
return 0;
}
