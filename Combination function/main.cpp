#include <iostream>

using namespace std;
int combination(int n,int k)
{
    if(n == k)
        return 1;
    long long num=1,den=1;
    for(int i=n;i>=k+1;i--)
    {
        num *= i;
    }
    for(int j=k;j>1;j--)
    {
        den *= j;
    }
    return num/den;
}
int main()
{
    int r,c;
    cin >> c >> r;
    cout << combination(c,r);
    return 0;
}
