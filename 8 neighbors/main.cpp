#include <iostream>

using namespace std;

int main()
{
    int n,m,x,y;
    cin >> n >> m;
    char** mat = new char*[n];
    for(int i=0;i<n;i++)
    {
        mat[i] = new char[m];
        for(int j=0;j<m;j++)
        {
            cin >> mat[i][j];
        }
    }
    cin >> x >> y;
    if(mat[x][y-1] != 'x' || mat[x-1][y] != 'x' || mat[x-2][y-1] != 'x' || mat[x-1][y-2] != 'x' || mat[x][y-2] != 'x' || mat[x-2][y] != 'x' || mat[x-2][y-2] != 'x' || mat[x][y] != 'x')
        cout << "No";
    else
        cout << "Yes";
    return 0;
}
