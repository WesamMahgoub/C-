#include <iostream>

using namespace std;

int main()
{
    int N,T;
    cin >> T;
    string* out = new string[T];
    for(int i=0;i<T;i++)
    {
        out[i] = "yes";
        cin >> N;
        int* array = new int[N];
        cin >> array[0];
        for(int j=1;j<N;j++)
        {
            cin >> array[j];
            if(array[j] != 0 && array[j-1] != 0)
            {
                out[i] = "no";
                break;
            }
        }
    }
    for(int k=0;k<T;k++)
    {
        cout << out[k] << endl;
    }
    return 0;
}
