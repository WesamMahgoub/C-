#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string* array = new string[T];
    string S;
    for(int i=0;i<T;i++)
    {
        cin >> S;
        array[i] = "Bad";
        for(int j=0;j<S.size();j++)
        {
            if(S[j] == '0' && S[j+1] == '1' && S[j+2] == '0' || (S[j] == '1' && S[j+1] == '0' && S[j+2] == '1'))
            {
                array[i] = "Good";
                break;
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
