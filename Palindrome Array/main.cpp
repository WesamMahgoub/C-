#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* array = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<n;j++)
    {
        if(array[j] != array[n-j-1])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
