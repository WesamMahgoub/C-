#include <iostream>

using namespace std;

int main()
{
    long long N,sum=0;
    cin >> N;
    if(N/4.0 != 0)
    int n = N/4+1;
    for(int i=1;i<=n;i++)
    {
        if(N%i == 0)
        {
            if(N/i != i)
                sum += i+N/i;
            else
                sum += i;
        }
    }
    cout << sum;
    return 0;
}
