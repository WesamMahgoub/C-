#include <iostream>

using namespace std;

int main()
{
    int A, B;
    char S;
    bool result;
    cin >> A >> S >> B;
    switch(S)
    {
    case '>':
        result = A > B;
        break;
    case '<':
        result = A < B;
        break;
    case '=':
        result = A == B;
        break;
    }
    if(result == 1)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }
    return 0;
}
