#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int* array = new int[n];
    int* mat = new int[m];
    for(int j=0;j<m;j++)
    {
        mat[j]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
        mat[array[i]-1]++;
    }
    for(int i=0;i<m;i++)
    {
        cout << mat[i] << endl;
    }
    return 0;
}
