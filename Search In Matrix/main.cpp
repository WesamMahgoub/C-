#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N,M,X;
    cin >> N >> M;
    int** matrix = new int*[N];
    for(int i=0;i<N;i++)
    {
        matrix[i] = new int[M];
        for(int j=0;j<M;j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> X;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(matrix[i][j] == X)
            {
                cout << "will not take number" ;
                exit(0);
            }
        }
    }
    cout << "will take number";
    return 0;
}
