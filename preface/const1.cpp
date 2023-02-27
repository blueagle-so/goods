#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
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
t1 = t2 = clock () /CLOCKS_PER_SEC;
while (seconds) {
if (t1/CLOCKS_PER_SEC+1 <= (t2=clock())/CLOCKS_PER_SEC) {
seconds--;
t1 = t2;
}
}
cout << "fffff\a"; // звонок
}
int main()
{
timer a(10), b(20), c(1, 10);
a.run (); // отсчитать 10 секунд
//b.run (); // отсчитать 20 секунд
//c.run (); // отсчитать 1 минуту, 10 секунд
return 0;
}
