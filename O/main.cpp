#include <iostream>

using namespace std;

int main()
{
    char X;
    cin >> X;
    if (X >= 65 && X < 97)
    {
        cout << "IS CAPITAL";
    }
    else
        {
            cout << "IS SMALL";
        }
    return 0;
}
