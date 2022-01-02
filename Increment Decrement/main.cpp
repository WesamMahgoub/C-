#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int count=0,max=0;
    for(int i=0;i<S.length();i++)
    {
        if(S[i] == 'I')
        {
            count++;
            if(max < count)
            max = count;
        }
        else if(S[i] == 'D')
            count--;
    }
    cout << max;
    return 0;
}
