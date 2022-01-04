#include <iostream.h>
#include <conio.h>

class GeoShape
{
  protected:
	float x,y;
  public:
	GeoShape():x(0),y(0)
	{
	}
	GeoShape(float a,float b):x(a),y(b)
	{
	}
	GeoShape(float a):x(a),y(a)
	{
	}
	void SetX(float a)
	{
	  x = a;
	}
	void SetY(float b)
	{
	  y = b;
	}
	void SetXY(float a,float b)
	{
	  x = a;
	  y = b;
	}
	float GetX()
	{
	  return x;
	}
	float GetY()
	{
	  return y;
	}
	float GetArea()
	{
	  return 0.0;
	}
};

class Circle:protected GeoShape
{
  public:
	Circle(float a): GeoShape(a)
	{
	}

	void SetRadius(float r)
	{
	  x = y = r;
	}

	float GetArea()
	{
	  return 22.0 / 7 * x * y;
	}

};

class Rectangle:public GeoShape
{
  public:
	Rectangle(float a,float b): GeoShape(a,b)
	{
	}
	float GetArea()
	{
	  return x * y;
	}
};

class Square:protected Rectangle
{
  public:
	Square(float a): Rectangle(a,a)
	{
	}

	void SetSide(float length)
	{
	  x = y = length;
	}

	float GetArea()
	{
	  return x * y;
	}
};

class Triangle:public GeoShape
{
  public:
	Triangle(float a,float b): GeoShape(a,b)
	{
	}
	float GetArea()
	{
	  return 0.5 * x * y;
	}
};

void main()
{
  clrscr();

  Triangle T1(20,10);
  cout << T1.GetArea() << endl;
  Circle C1(7);
  cout << C1.GetArea() << endl;
  Rectangle R1(2,5);
  cout << R1.GetArea() << endl;
  Square S1(5);
  cout << S1.GetArea() << endl;
//  S1.SetY(4);
//  C1.SetY(3);
  S1.SetSide(4);
  C1.SetRadius(3);
  cout << S1.GetArea() << endl;
  cout << C1.GetArea() << endl;
  getch();
}