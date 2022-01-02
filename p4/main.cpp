#include <iostream>

using namespace std;
class Int
{
    private:
    int x;
    public:
    Int(): x(0)
    {}
    Int(int v): x(v)
    {}
    void display()
    {
        cout << x;
    }
    Int operator +(Int x1,Int x2)
    {
        long double var = long double(x1.x) + long double(x2.x);
        if (var > 2147483648 || var < -2147483647){
            cout << "\nnot valid";
        }
        else
        return Int(var);
    }
    Int operator *(Int x1,Int x2)
    {
        long double var = long double(x1.x) * long double(x2.x);
        if (var > 2147483648 || var < -2147483647){
            cout << "\nnot valid";
        }
        else
        return Int(var);
    }
};
int main()
{
    Int r, l, e;
    r(5748937958309);
    l(7638748309000);
    e = r + l;
    return 0;
}
