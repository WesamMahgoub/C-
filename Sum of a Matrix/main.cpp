#include <iostream>

using namespace std;

int main()
{
    int R,C;
    cin >> R >> C;
    int** array1 = new int*[R];
    int** array2 = new int*[R];
    for(int i=0;i<R;i++)
    {
        array1[i] = new int[C];
        for(int j=0;j<C;j++)
        {
        cin >> array1[i][j];
        }
    }
     for(int i=0;i<R;i++)
    {
        array2[i] = new int[C];
        for(int j=0;j<C;j++)
        {
        cin >> array2[i][j];
        }
    }
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout << array1[i][j]+array2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
