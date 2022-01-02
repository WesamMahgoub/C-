#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
    private:
    double rad, ang;
    public:
    Polar(): rad(0.0),ang(0.0)
    {}
    Polar(double r,double a):rad(r),ang(a)
    {}
    Polar operator + (Polar p)
    {
        double x = rad * cos(ang) + p.rad * cos(p.ang);
        double y = rad * sin(ang) + p.rad * sin(p.ang);
        double r = sqrt(x*x,y*y);
        double a = atan(y/x);
        return Polar(r,a);
    }
};
int main()
{
   Polar p1,p2,p3;
   p1(1,30);
   p2(1,60);
   p3 = p1 + p2;
   cout << p3;
    return 0;
}
