#include <iostream>

using namespace std;

int main()
{
    int n,k,sum=0;
    cin >> n >> k;
    int* array = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
        if(n == k)
            sum += array[i];
            else if(k < n)

    }
    cout << sum;
    return 0;
}
