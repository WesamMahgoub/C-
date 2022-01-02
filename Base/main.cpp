#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin >> T;
    int* array = new int[T];
    for(int i=0;i<T;i++)
    {
        cin >> N;
        int* arr = new int[32];
        int j=0;
        while(N != 0)
        {
            N /= 2;
            arr[j++] = N%2;
        }
    }
    for(int i=0;i<T;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
