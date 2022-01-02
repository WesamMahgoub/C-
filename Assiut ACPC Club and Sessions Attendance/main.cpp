#include <iostream>

using namespace std;

int main()
{
    long long n,m,k,s;
    cin >> n >> m >> k;
    if(n%2 != 0)
        s = n/2+1;
    else
        s = n/2;
    if(n-m < s-k)
        cout << -1;
    else
        cout << s-k;
    return 0;
}
