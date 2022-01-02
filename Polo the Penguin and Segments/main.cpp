#include <iostream>

using namespace std;

int main()
{
    int n,k,l,r,sum=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> l >> r;
        sum += r-l+1;
    }
    if(sum%k == 0)
        cout << 0;
    else if(sum%k != 0)
        cout << k-sum%k ;
    return 0;
}
