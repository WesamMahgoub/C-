#include <iostream>

using namespace std;
long long factorial(int n)
{
    long long sum = 1;
    for(int i=2;i<=n;i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}
