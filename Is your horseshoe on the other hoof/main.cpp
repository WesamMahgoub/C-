#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b && a == c && a == d)
        cout << 3;
        else if(a != b && a != c && a != d && b != c && b != d && c != d)
            cout << 0;
        else if(a == b && a == c || a == b && a == d || a == c && a == d || b == c && b == d || a == b && c == d || a == c && b == d || a == d && b == c)
            cout << 2;
        else
            cout << 1;
    return 0;
}
