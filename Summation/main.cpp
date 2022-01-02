#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N ;
    long long sum=0;
    cin >> N;
    int* ptr = new int [N];
    for(int i=0;i<N;i++)
    {
        cin >> ptr[i];
        sum += ptr[i];
    }
    cout << abs(sum);
    return 0;
}
