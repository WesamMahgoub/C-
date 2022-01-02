#include <iostream>

using namespace std;

int main()
{
    int T,w,h;
    cin >> T;
    string* array = new string[T];
    for(int i=0;i<T;i++)
    {
        cin >> w >> h;
        if(w == h)
            array[i] = "Square";
        else
            array[i] = "Rectangle";
    }
    for(int i=0;i<T;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
