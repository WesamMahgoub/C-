#include <iostream>

using namespace std;

int main()
{
    int T,n,k,pi;
    cin >> T;
    int* array = new int[T];
    for(int i=0;i<T;i++)
    {
        cin >> n;
        int* elem = new int[n];
        for(int j=0;j<n;j++)
        {
            cin >> elem[j];
            if(elem[j]%2 == 0)
                array[i] = j+1;

        }
    }
    return 0;
}
