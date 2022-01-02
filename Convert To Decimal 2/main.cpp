#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T,N,arr[10]={0,0,0,0,0,0,0,0,0,0};
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> N;
       int sum=0;
        while(N != 0)
        {
            sum += N%2;
            N /= 2;
        }
            arr[i] = pow(2,sum) - 1;
    }
    for(int j=0;j<T;j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}
