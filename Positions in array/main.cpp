#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* array = new int [N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<N;j++)
    {
        if(array[j] <= 10)
            cout << "A[" << j << "] = " << array[j] << endl;
    }
    return 0;
}
