// программа использует манипулятор для ввода пароля
#include <iostream.h>
#include <iomanip.h>
#include <string.h>
#include <stdlib.h>
char *password="IlikeC++";
char pw[80];
// ввод пароля
istream &getpass(istream &stream, int tries)
{
do {
cout << "Enter password: ";
stream >> pw;
if (!strcmp(password, pw) ) return stream;
cout << "\a"; // bell
tries--;
} while (tries>0);
cout << "All tries failed! \n";
exit(1); // пароль не введен
return stream;
}
imanip<int> getpass(int tries) {
return imanip<int>(getpass, tries);
}
int main()
{
// три попытки на ввод пароля
cin >> getpass (3);
cout << "Login Complete! \n";
return 0;
}
