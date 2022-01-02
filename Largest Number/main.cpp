#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(n == 0)
        cout << 0;
    else if(n >= m)
    {
    for(int i=n;i>0;i--)
    {
        if(i%m == 0)
        {
            cout << i;
            break;
        }
    }
    }
    else if(m > n)
        cout << 1;
    return 0;
}
