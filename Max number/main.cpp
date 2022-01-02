#include <iostream>

using namespace std;
int max_num(int arr[],int size)
{
    int max = array[size-2];
    if(max < array[size-2])
    max = array[size-2];
        return max*max_num(max);
}
int main()
{
    int n;
    cin >> n;
    int* array = new int[n];
    for(int i=0;i<;i++)
    {
        cin >> array[i];
    }
    cout << max_num(array,n);
    return 0;
}
