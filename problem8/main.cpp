#include <iostream>

using namespace std;
class box
{
private:
    double x, y, z;
public:
    box(double x0, double y0, double z0): x0(x), y0(y), z0(z)
    {}
    double area ()
    {
        return x*y;
    }
    bool isCube ()
    {
        if (x == y && y == z)
            return true;
        else
            return false;
    }
        bool operator == (box b)
        {
            if(b.x*b.y*b.z == x*y*z)
                return true;
            else
                return false;
        }
        box operator + (box b1, box b2)
        {
            x = b1.x + b2.x;
            if (b1.y > b2.y)
                y = b1.y;
            else
                y = b2.y;
            if (b1.z > b2.z)
                z = b1.z;
            else
                z = b2.z;
         return box(x,y,z);
        }
        double L2C ()
        {
            return
        }
};
int main()
{

    return 0;
}
