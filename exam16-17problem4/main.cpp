#include <iostream>

using namespace std;

class vector
{
private:
    int array[100],count;
public:
    vector()
    {
        count = 0;
        for(int i = 0;i<100;i++)
            array[i]=0;
    }
    vector(int arr[100])
    {
        for(int i = 0; i < 100 ;i++)
        {
            array[i]=arr[i];
            if(array[i] != NULL)
                count++;
        }
    }
    void append(int data)
    {
            array[++count]=data;
    }
    int get(int index)
    {
            return array[index];
    }
    int GetCount()
    {
            return count;
    }
};
int main()
{
    int a[5] = {1,5,7,434,9};
    vector v1(a);
    cout << v1.GetCount();
    //v1.append(90);
    //cout << v1.GetCount() << endl << v1.get(5);
    return 0;
}
