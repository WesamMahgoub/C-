#include <iostream>

using namespace std;
void pascal(int n)
{
    int** array = new int*[n];
    for(int i=0;i<=n;i++)
    {
        array[i] = new int[n];
        for(int j=0;j<=n;j++)
        {
            if(i == j || j == 0)
            {
                array[i][j] = 1;
                cout << array[i][j] << " ";
            }
                else if(j < i)
                {
                    array[i][j] = array[i-1][j]+array[i-1][j-1];
                    cout << array[i][j] << " ";
                }
                else
                    break;
        }
        cout << endl;
    }

}
int main()
{
    int N;
    cin >> N;
    pascal(N);
    return 0;
}
