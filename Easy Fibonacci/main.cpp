#include <iostream>

using namespace std;

int main()
{
    int N,sum=0,fib=1,temp=0;
    cin >> N;
    if(N == 0 || N == 1)
        cout << 0;
    else
        {
    cout << sum << " " << fib << " ";
    for(int i=0;i<N-2;i++)
    {
        temp = sum + fib;
        sum = fib;
        fib = temp;
        cout << temp << " ";
    }
        }
    return 0;
}
