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
  /*	virtual float GetArea()
	{
	  return 0.0;
	}*/
	virtual float GetArea() = 0;
};

class Circle:public GeoShape
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

class Square:public Rectangle
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

float sumAreas(GeoShape& p1,GeoShape& p2,GeoShape& p3)
{
  return p1.GetArea()+p2.GetArea()+p3.GetArea();
}

void main()
{
  clrscr();

/*  Triangle T1(20,10);
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
  cout << C1.GetArea() << endl; */

  GeoShape* gptr;
//  GeoShape g;
  Rectangle r1(2,5);
//  gptr = &g;
//  cout << gptr->GetArea() << endl;
  gptr = &r1;
  cout << gptr->GetArea() << endl;
  Rectangle r2(1,4),r3(5,20);
  Square s1(10),s2(20),s3(30);
  Circle c1(30);
  Triangle t1(10,20),t2(20,40);
  cout << sumAreas(s1,s2,s3) << endl;
  cout << sumAreas(t2,c1,r3) << endl;
  cout << sumAreas(r2,s2,t2) << endl;
  getch();
}