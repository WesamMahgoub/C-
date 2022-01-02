#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
private:
    double rad;
    double ang;
public:
    Polar(): rad(0), ang(0)
    {

    }
    Polar(double r, double a): rad(r), ang(a)
    {

    }

    void display ()
    {
        cout << rad << "    " << ang;
    }
    Polar operator + (Polar p)
    {
        double yc = rad*sin(ang) + p.rad*sin(ang);
        double xc = rad*cos(ang) + p.rad*cos(ang);
        rad = sqrt(pow(xc,2) + pow(yc,2));
        ang = atan(yc/xc);
        return Polar(rad,ang);
    }
};
int main()
{
    Polar p3;
    Polar p1(2,5);
    Polar p2(37,98);
    p3 = p1 + p2;
    p3.display();
    return 0;
}
