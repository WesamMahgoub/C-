#include <iostream>

using namespace std;

int main()
{
    int n,m,temp;
    cin >> n >> m;
    int** mat = new int*[n];
    for(int i=0;i < n;i++)
    {
        mat[i] = new int[m];
        for(int j=0;j<m;j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m/2;j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[i][m-j-1];
            mat[i][m-j-1] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
