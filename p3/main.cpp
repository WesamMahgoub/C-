#include <iostream>

using namespace std;
class time
{
    private:
    int hour, minute, second;
    public:
    time():hour(0),minute(0),second(0)
    {}
    time(int hr,int mn,int sc):hour(hr),minute(mn),second(sc)
    {}
    void display()
    {
        cout << hour << ":" << minute << ":" << second;
    }
        time operator +(time t1,time t2)
        {
            int s = (t1.second + t2.second) % 60;
            int m = (t1.minute + t2.minute + (t1.second + t2.second) / 60) % 60;
            int h = (t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60) % 24;
            return time(h,m,s);
            }

    };
int main()
{
    time ti1(12,45,57);
    time ti2(14,56,23);
    time ti3;
    ti3 = ti1 + ti2;
    ti3.display();
    return 0;
}
