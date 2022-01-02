#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char** array = new char*[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
        array[i] = new char[N];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(array[i][j] == 'G' && array[i][j] == 'S' || (array[i][j] == 'G' && array[i][j] == 'H'))
                {
                    cout << "Ruh-roh--RAGGY!!!";
                    exit(0);
                }
                else if(array[i][j] == 'E' && array[i][j] == 'S' && array[i][j] == 'H')
                {
                    cout << "Scooby-Dooby-Doo!";
                    exit(0);
                }
        }
    }
    return 0;
}
