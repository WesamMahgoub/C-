#include <iostream>

using namespace std;
class time
{
private:
    int hour;
    int minute;
    int second;
public:
    time():hour(0), minute(0), second(0)
    {}
   time(int h, int m, int s):hour(h), minute(m), second(s)
    {}
    void display()
    {
        cout << hour << ":" << minute << ":" << second;
    }
    time operator + (time t0)
    {
        time t1;
        t1.hour = hour + t0.hour;
        t1.minute = minute + t0.minute;
        t1.second = second + t0.second;
        if (t1.second >= 60)
        {
            t1.second -= 60;
            t1.minute++;
        }
        if (t1.minute >= 60)
        {
            t1.minute -= 60;
            t1.hour++;
        }
        if (t1.hour >= 24)
        {
            t1.hour -= 24;
        }
        return time(t1);
    }
};
int main()
{
    time t2(12,64,78);
    time t3(10,6,38);
    time t4 = t2 + t3;
    t4.display();
    return 0;
}
