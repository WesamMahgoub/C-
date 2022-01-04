#include <iostream.h>
#include <conio.h>

class Complex
{

  private:
	float real;
	float image;
  public:
	Complex();
	Complex(float r);
	Complex(float r,float i);
	~Complex();
	void SetReal(float r);
	void SetImage(float i);
	float GetReal();
	float GetImage();
	void SetAll();
	void SetAll(float f);
	void SetAll(float r,float i);
	Complex add(Complex c);
	Complex sub(Complex c);
	void print();
};

Complex::Complex()
{
  this->real = 0;
  this->image = 0;

}

Complex::Complex(float r)
{
  this->real = r;
  this->image = r;
}

Complex::Complex(float r,float i)
{
  real = r;
  image = i;
}

Complex::~Complex()
{
  cout << "Destructor\n";
}

void Complex::SetAll()
{
  real = 0;
  image = 0;
}

void Complex::SetAll(float f)
{
  real = f;
  image = f;
}

void Complex::SetAll(float r,float i)
{
  real = r;
  image = i;
}

Complex Complex::add(Complex c)
{
  Complex temp;
  temp.real = this->real + c.real;
  temp.image = this->image + c.image;
  return temp;
}

Complex Complex::sub(Complex c)
{
  Complex temp;
  temp.real = real - c.real;
  temp.image = image - c.image;
  return temp;
}

float Complex::GetReal()
{
  cout << "please, enter the real number:\n";
  cin >> this->real;
  return this->real;
}

float Complex::GetImage()
{
  cout << "please, enter the image number:\n";
  cin >> this->image;
  return this->image;
}

void Complex::print()
{
  cout << this->real << "+" << this->image << '\n';
}


void main()
{

  Complex comp1,comp2(3,4),result(5);
  clrscr();

  comp1.SetAll(7);
 // comp1.SetImage(2);
  result = comp1.add(comp2);
  result.print();
  result = comp1.sub(comp2);
  comp1.print();
  result.print();

  getch();
}