#include <iostream>

using namespace std;

int main()
{
    int n,q,L,R,sum;
    cin >> n >> q;
    int* array = new int[n];
    long long* out = new long long[q];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<q;j++)
    {
        cin >> L >> R;
        out[j] = 0;
        for(int k=L-1;k<R;k++)
        {
            out[j] += array[k];
        }
    }
    for(int k=0;k<q;k++)
    {
        cout << out[k] << endl;
    }

    return 0;
}
