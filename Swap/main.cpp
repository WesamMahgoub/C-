#include <iostream>

using namespace std;
void swap(float& a,float& b)
{
    float temp = a;
    a = b;
    b = temp;
}
int main()
{
    float X,Y;
    cin >> X >> Y;
    swap(X,Y);
    cout << X << " " << Y;
    return 0;
}
