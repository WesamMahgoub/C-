#include <iostream>



using namespace std;

class array
{
private:
    int count;
    float* arr;
public:
    array(int c):count(c)
    {
        arr = new float[count];
        for(int i=0;i<count;i++)
        {
            arr[i] = 0;
        }
    }
    void get()
    {
        for(int i=0;i<count;i++)
        {
        cout << "Enter a number: ";
        cin >> arr[i];
        }
    }
    void average()
    {
        float ave = 0;
        for(int i=0;i<count;i++)
        {
            ave += arr[i];
        }
        cout << "average: " << ave/count;
    }
};
int main()
{
    array a1(5);
    a1.get();
    a1.average();
    return 0;
}
