#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X;
    double Y,price;
    cin >> X >> Y;
    if(X == 1)
    {
        price = 4.00*Y;
    }
    else if(X == 2)
    {
        price = 4.50*Y;
    }
    else if(X == 3)
    {
        price = 5.00*Y;
    }
    else if(X == 4)
    {
        price = 2.00*Y;
    }
    else if(X == 5)
    {
        price = 1.50*Y;
    }
    cout << "Total: R " << setprecision(2) << setiosflags(ios::fixed) << price;
    return 0;
}
