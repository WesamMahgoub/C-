#include <iostream>
#include <process.h>
#include <cstdlib>
using namespace std;

int main()
{
    int X;
    cin >> X;
    for(int i=2;i<X;i++)
    {
        if(X%i == 0)
        {
        cout << "NO";
        exit(0);
        }
    }
    cout << "YES";
    return 0;
}
