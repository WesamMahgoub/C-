#include <iostream.h>
#include <conio.h>

class Base
{
  private:
	int a;
	int b;
  public:

	Base()
	{
	  a = b = 0;
	}

	Base(int n)
	{
	  a = b = n;
	}

	Base(int x,int y)
	{
	  a = x;
	  b = y;
	}

	int setA(int x)
	{
	  a = x;
	  return a;
	}

	int setB(int y)
	{
	  b = y;
	  return b;
	}

	int getA()
	{
	  return a;
	}

	int getB()
	{
	  return b;
	}

	int CalSum()
	{
	  return a+b;
	}
};

class Derived: public Base
{
  private:
	int c;

  public:
	Derived():Base()
	{
	  c = 0;
	}

	Derived(int n): Base(n)
	{
	  c = n;
	}

	Derived(int x,int y,int z): Base(x,y)
	{
	  c = z;
	}
	void setC(int z)
	{
	  c = z;
	}

	int getC()
	{
	  return c;
	}

	int CalSum()
	{
	  return Base::CalSum() + c;
	}

};


void main()
{
  clrscr();

  Base b(5,4);
  cout << b.CalSum() << endl;
  Derived d;
  d.setA(3);
  d.setB(7);
  d.setC(1);
  Derived d2(20),d3(4,5,6);
  cout << d.CalSum() << endl;
  cout << d2.CalSum() << endl;
  cout << d3.CalSum() << endl;
  cout << d.Base::CalSum() << endl;
/*  d.b = 5;
  d.a = 7;
  d.z = 12;
  d.x = -13;
  d.setx(12);
  cout << d.getx();
*/
  getch();
}