#include <iostream>

using namespace std;

int main()
{
    int n ,max=0;
    long long N;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        cin >> N;
        while(N%2 == 0)
        {
        N /= 2;
        sum++;
        }
        if(sum > max)
            max = sum;
    }
    cout << max;
    return 0;
}
