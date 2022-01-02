#include <iostream>

using namespace std;
string binary(long long n)
{
    string ss;
    do{
        if(n%2 == 0)
            ss += "0";
            else
                ss += "1";
            n /= 2;
    }while(n != 0);
    for(int i=0;i<ss.size()/2;i++)
    {
        int temp = ss[i];
        ss[i] = ss[ss.size()-1-i];
        ss[ss.size()-1-i] = temp;
    }
    return ss;
}
int main()
{
    long long N;
    cin >> N;
    cout << binary(N);
    return 0;
}
