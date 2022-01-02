#include <iostream>

using namespace std;
 class Transport
 {
 private:
    int capacity;
    int passengers;
    float speed;
    string From_Location;
    string To_Location;
 public:
    Transport(int c,int p,float s,string f,string t): capacity(c),passengers(p),speed(s),From_Location(f),To_Location(t)
    {

    }
    bool availableSpace()
    {
        if(passengers < capacity)
            return true;
        else
            return false;
    }
    int book()
    {
        if(availableSpace() == 1)
        {


        }
        else
            return -1;
    }
 };
 class Ship: public Transport
 {
 public:
    Transport(int c,int p,float s,string f,string t): capacity(c),passengers(p),speed(s),From_Location(f),To_Location(t):
        {

        }
 };
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
