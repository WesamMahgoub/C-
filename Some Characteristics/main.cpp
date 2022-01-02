#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch;
    string* array = new string[n];
    for(int i=0;i<n;i++)
    {
        cin >> ch;
        if(ch >= 48 && ch <= 57)
            array[i] = "is digit";
        else if(ch >= 97 && ch <= 122)
            array[i] = "is lower";
        else
            array[i] = "is upper";
    }
    for(int j=0;j<n;j++)
    {
        cout << array[j] << endl;
    }
    return 0;
}
