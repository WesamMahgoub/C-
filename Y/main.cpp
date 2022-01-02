#include <iostream>

using namespace std;

int main()
{
    int A, B, C, output;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    switch(S)
    {
    case '+':
        output = A + B;
        break;
    case '-':
        output = A - B;
        break;
    case '*':
        output = A * B;
        break;
    }
    if (output == C)
    {
        cout << "Yes";
    }
    else
    {
        cout << output;
    }
    return 0;
}
