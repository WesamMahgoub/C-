#include <iostream>

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
    for(int j=0;j<N-1;j++)
    {
        for(int k=j+1;k<N;k++)
        {
            if(array[k] < array[j])
            {
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout << array[i] << " ";
    }
  return 0;
}
