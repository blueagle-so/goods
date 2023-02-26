#include <iostream.h>
#include <iomanip.h>
ostream &dollars(ostream &stream, double amount)
{
stream.setf (ios::showpoint);
stream << "$" << setw(10) << setprecision (2) << amount;
return stream;
}
omanip <double> dollars(double amount) {
return omanip<double> (dollars, amount);
}
int main()
{
cout << dollars (123.123456);
cout << "\n" << dollars(10.0);
cout << "\n" << dollars(1234.23);
cout << "\n" << dollars(0.0);
return 0;
}
