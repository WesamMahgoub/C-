#include <iostream>

using namespace std;

int main()
{
    int w,h,num=0;
    cin >> w >> h;
    char** array = new char*[w];
    for(int i=0;i<w;i++)
    {
        array[i] = new char[h];
        for(int j=0;j<h;j++)
        {
            cin >> array[i][j];
        }
    }
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(array[i][j] == '*' && array[i+1][j] == '*' && array[i][j+1] == '*' && array[i][j-1] == '*' && array[i-1][j] == '*')
            {
                num++;
            }
        }
    }
    return 0;
}
