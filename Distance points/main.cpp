#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long double x = (x1-x2)*(x1-x2);
    long double y = (y1-y2)*(y1-y2);
    cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(9) << sqrt(x+y);
    return 0;
}
