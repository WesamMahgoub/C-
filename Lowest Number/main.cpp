#include <iostream>

using namespace std;

int main()
{
    int N,low,j;
    cin >> N;
    int* array = new int [N];
    cin >> array[0];
    low = array[0];
    j = 0;
    for(int i=1;i<N;i++)
    {
        cin >> array[i];
        if(array[i] < low)
            {
                low = array[i];
                j = i;
            }
    }
    cout << array[j] << " " << j+1;

    return 0;
}
