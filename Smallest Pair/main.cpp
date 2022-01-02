#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin >> T;
    int* ptr = new int[T];
    for(int i=0;i<T;i++)
    {
        cin >> N;
        int* array = new int[N];
        for(int j=0;j<N;j++)
        {
            cin >> array[j];
        }
        ptr[i] = array[0]+array[1]+1;
        for(int k=0;k<N-1;k++)
        {
            for(int l=k+1;l<N;l++)
            {
                if(array[k]+array[l]+l-k < ptr[i])
                ptr[i] = array[k]+array[l]+l-k;
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}
