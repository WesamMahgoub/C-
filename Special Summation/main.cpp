#include <iostream>

using namespace std;

int main()
{
    int N,sum = 0;
    cin >> N;
    int** array = new int*[N];
    for(int i=0;i<N;i++)
    {
        array[i] = new int[N];
        for(int j=0;j<N;j++)
        {
            cin >> array[i][j];
            if(i == j)
                sum += array[i][j];
        }
    }
    cout << sum;
    return 0;
}
