#include <iostream.h>
#include <conio.h>

class Base
{
  private:
	int x;
  protected:
	int y;
  public:
	int z;
	int setx(int a)
	{
	  x = a;
	  return x;
	}
	int sety(int b)
	{
	  y = b;
	  return y;
	}
	int getx()
	{
	  return x;
	}
	int gety()
	{
	  return y;
	}
	void disp()
	{
	  cout << "Parent Class" << endl;
	}
};

class Derived: public Base
{
  private:
	int a;
  public:
	int b;
	void resetall()
	{
	//  x = 0;
	  y = 0;
	  z = 0;
	  a = 0;
	  b = 0;
	}
	void disp()
	{
	  cout << "Child Class" << endl;
	}
};


void main()
{
  clrscr();

  Derived d;
  d.disp();
  d.Base::disp();
  getch();
}