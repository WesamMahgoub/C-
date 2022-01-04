#include <iostream.h>
#include <conio.h>

class Base
{
  public:
	int x;
};

class Base1:virtual public Base
{
 // public:
   //	int x;

};
class Base2:public virtual Base
{
 // public:
   //	int x;

};

class Derived:public Base1,public Base2
{

};

void main()
{

  Derived d;
  d.x = 10;
  d.Base1::x = 10;
  d.Base2::x = 20;

}

