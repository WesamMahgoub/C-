#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = (n/10)*10;
    if(n < 0)
    cout << -1*(n-t);
    else
        cout << n-t;
    return 0;
}
