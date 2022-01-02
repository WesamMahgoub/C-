#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,psum=0,ssum=0;
    cin >> N;
    int** matrix = new int*[N];
    for(int i=0;i<N;i++)
    {
        matrix[i] = new int[N];
        for(int j=0;j<N;j++)
        {
            cin >> matrix[i][j];
            if(i==j)
                psum += matrix[i][j];
            if(i+j+1 == N)
                ssum += matrix[i][j];
        }
    }
    cout << abs(psum-ssum);
    return 0;
}
