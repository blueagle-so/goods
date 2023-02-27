#include <iostream.h>
#include <stdlib.h>
#include <time.h>
class timer {
int seconds;
public:
// секунды задаются строкой
timer(char *t) { seconds = atoi(t); }
// секунды задаются целым числом
timer (int t) { seconds = t; }
// время задается в минутах и секундах
timer (int min, int sec) { seconds = min*60 + sec; }
void run();
};
void timer::run()
{
clock_t t1, t2;
t1 = t2 = clock ()/CLK_TCK;
while (seconds) {
if (t1/CLK_TCK+1 <= (t2=clock())/CLK_TCK) {
seconds--;
t1 = t2;
}
}
cout << "\a"; // звонок
}
int main()
{
timer a (10);
a.run();
cout << "Enter number of seconds: ";
char str [ 80];
cin >> str;
timer b(str); // инициализация во время выполнения с помощью строки
b.run();
cout << "Enter minutes and seconds: ";
int min, sec;
cin >> min >> sec;
timer с(min, sec); /* инициализация во время выполнения с помощью минут и секунд */
c.run();
return 0;
}
