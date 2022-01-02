#include <iostream>

using namespace std;
void prime(int n)
{
    bool check = 0;
    if(n == 2)
        cout << "YES" << endl;
    else if(n == 1)
        cout << "NO" << endl;
    else
    {
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            cout << "NO" << endl;
            check = 0;
            break;
        }
        else
            check = 1;
    }
    }
    if(check == 1)
    cout << "YES" << endl;
}
int main()
{
    int c,x;
    cin >> c;
    for(int i=1;i<=c;i++)
    {
        cin >> x;
        prime(x);
    }
    return 0;
}
