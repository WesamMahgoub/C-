#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char** array = new char*[N];
    string S,T;
    for(int i=0;i<N;i++)
    {
        cin >> S >> T;
        array[i] = new char[S.size()+T.size()+1];
        int s_size=0;
        for(int j=0;j<(S.size()+T.size());j++)
        {
            if(j < S.size() && j < T.size())
            {
            array[i][s_size++] = S[j];
            array[i][s_size++] = T[j];
            }
            else if(j <= S.size() && j >= T.size())
            {
             array[i][s_size++] = S[j];
            }
            else if(j >= S.size() && j <= T.size())
            {
             array[i][s_size++] = T[j];
            }
        }
    }
   for(int i=0;i<N;i++)
    {
            cout << array[i] << endl;
    }
    return 0;
}
