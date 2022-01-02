#include <iostream>

using namespace std;

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int sum;
    string s;
    cin >> s;
    for(int i=0;i<26;i++)
    {
        sum = 0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j] == alphabet[i])
            {
                cout << alphabet[i] << " : " << sum;
            }
        }
    }
    return 0;
}
