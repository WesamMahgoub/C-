#include <iostream>

using namespace std;
class Gate
{
private:
    int n;
    bool* input;
public:
     Gate(int num):n(num)
    {
        input= new bool[n];
        for(int i=0;i<n;i++)
        {
            input[i]=0;
        }
    }
    void setInput(int index,bool value)
    {
            input[index]= value;
    }
    bool getInput(int num)
    {
            return input[num];
    }
    int GetNumberOfInputs()
    {
        return n;
    }
};

class OR: public Gate
{
public:
    OR(int num): Gate(num)
    {
    }
    bool Output()
    {
        bool sum = 0;
        for(int i=0;i<GetNumberOfInputs();i++)
        {
            sum += getInput(i);
        }
        return sum;
    }
};

class AND: public Gate
{
public:
    AND(int num): Gate(num)
    {

    }
    bool Output()
    {
        bool sum = 1;
        for(int i=0;i<GetNumberOfInputs();i++)
        {
            sum *= getInput(i);
        }
        return sum;
    }
};

class NOT: private Gate
{
public:
    NOT(): Gate(1)
    {

    }
    bool Output()
    {
        return !(getInput(0));
    }
};
int main()
{
   /* NOT n;
cout<<n.GetNumberOfInputs()<<endl;
AND a(3);
cout<<a. GetNumberOfInputs()<<endl;
*/
    bool x,y,z;
NOT N1,N2,N3;
AND A(3);
AND B(3);
OR O(2);
for(int i=0;i<8;i++)
{
x = (i < 4)? 0:1;
y = (i < 2 || i > 4);
z = i % 2;
}
    return 0;
}
