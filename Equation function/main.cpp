#include <iostream>
#include <cmath>
using namespace std;
long long equation(int a,int b)
{
    long long sum=0,s=a;
    for(int i=0;i<=b;i+=2)
    {
       for(int j=0;j<i;j++)
       {
           s *= a;
       }
       sum += s;
    }
    return sum;
}
int main()
{
    int x,n;
    cin >> x >> n;
    long long r = equation(x,n);
    cout << r;
    return 0;
}
