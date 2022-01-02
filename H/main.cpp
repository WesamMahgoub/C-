#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double R, PI = 3.141592653, area;
    cin >> R;
    area = R*PI*R;
    cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(9) << area;
    return 0;
}
