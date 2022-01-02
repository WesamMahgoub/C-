#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char array[16];
    for(int i=0;i<16;i++)
    {
            cin >> array[i];
    }

    for(int i=0;i<12;i++)
    {
            if((array[i] == array[i+1] && array[i] == array[i+4]) || (array[i] == array[i+1] && array[i] == array[i+5]) || (array[i] == array[i+1] && array[i] == array[i+4] && array[i] == array[i+5]) || (array[i] == array[i+4] && array[i] == array[i+5]) || (array[i] == array[i+4] && array[i] == array[i+3]))
            {
                cout << "YES";
                exit(0);
            }
    }
    cout << "NO";
    return 0;
}
