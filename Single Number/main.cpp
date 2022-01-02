#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int* array = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    if(N%2 == 0)
    {
        cout << 0;
        exit(0);
    }
    for(int j=0;j<N-1;j++)
    {
        bool element = 1;
        for(int k=j+1;k<N;k++)
        {
            if(array[j] == array[k])
            {
                element = 0;
                break;
            }
        }
        if(element == 1)
        {
            cout << array[j];
            break;
        }
    }
    return 0;
}
