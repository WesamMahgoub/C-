#include <iostream>

using namespace std;

int main()
{
    int n,q,X,count;
    cin >> n >> q;
    int* array = new int[n];
    int* conditions = new int[q];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<q;j++)
    {
        cin >> X;
        count = 0;
        for(int k=0;k<n;k++)
        {
            if(array[k] > X)
            count++;
        }
        conditions[j] = count;
    }
    for(int i=0;i<q;i++)
    {
        cout << conditions[i] << endl;
    }
    return 0;
}
