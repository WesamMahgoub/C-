#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    cin >> X >> Y;
    if(Y == 0)
        cout << -1;
    else
    cout << X%Y;
    return 0;
}
