#include <iostream.h>
#include <conio.h>

class Base
{
  private:
	int x;
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
};

class Derived: public Base
{
  private:
	int a;
  public:
	int b;
};


void main()
{
  clrscr();

  Derived d;

  d.b = 5;
//  d.a = 7;
  d.z = 12;
//  d.x = -13;
  d.setx(12);
  cout << d.getx();

  getch();
}