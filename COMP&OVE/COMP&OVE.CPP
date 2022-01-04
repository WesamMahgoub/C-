#include <iostream.h>
#include <conio.h>
#include <math.h>

class Complex
{

  private:
	float real;
	float image;
  public:
	Complex();
	Complex(float r);
	Complex(float r,float i);
	Complex(Complex& c);
	Complex operator +(Complex& c);
	Complex operator +(float f);
	friend Complex operator +(float f,Complex& c);
	Complex& operator ++();
	Complex operator ++(int);
	Complex& operator =(Complex& c);
	Complex& operator +=(Complex& c);
	int operator ==(Complex& c);
	operator float();
	friend ostream& operator <<(ostream& out,Complex& c);
	friend istream& operator >>(istream& in,Complex& c);
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

Complex::Complex(Complex& c)
{
  real = c.real;
  image = c.image;
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
  getch();
}


void main()
{

  clrscr();
  Complex c1(12,7),c2(10,-5),c3;

  c3 = c1+c2;
  c2.print();
  c3 = c1+13.65;
  c3.print();
  c3 = 6.2+c2;
  c3.print();
  c3 = ++c1;
  c1.print();
  c3.print();
  c3 = c2++;
  c2.print();
  c3.print();
  c3 = c1;
  c1.print();
  c3.print();
  c2 = c1 = c3;
  c1.print();
  c2.print();
  c3.print();
  c2 = 13;
  c2 += c1;
  c1.print();
  c2.print();
  c2 = c1 += c3;
  c1.print();
  c2.print();
  c3.print();
  c3 = c1;

  cout << "c1 equals to c3?" << (c1==c3) << endl;
  if(!(c1==c2))
	cout << "c1 is not equal to c2" << endl;

  cout << "The float of c1 " << float(c1) << endl;
  float f = (float)c2;
	cout << "The casting of c2 is: " << f << endl;

  cin >> c2;
  cout << c1 << c2 << c3;

  getch();
}

Complex Complex::operator +(Complex& c)
{
  Complex temp(real+c.real,image+c.image);
  return temp;
}

Complex Complex::operator +(float f)
{
  Complex temp(real+f,image);
  return temp;
}
Complex operator +(float f,Complex& c)
{
  Complex temp(f+c.real,c.image);
  return temp;
}

Complex& Complex::operator ++()
{
  real++;
  image++;
  return *this;
}

Complex Complex::operator ++(int dumy)
{
  Complex temp(*this);
  real++;
  image++;
  return temp;
}

Complex& Complex::operator=(Complex& c)
{
  real = c.real;
  image = c.image;
  return *this;
}

Complex& Complex::operator+=(Complex& c)
{
  this->real += c.real;
  this->image += c.image;
  return *this;
}

int Complex::operator==(Complex& c)
{
  if((this->real == c.real) && (this->image == c.image))
	return 1;
  else
	return 0;
}

Complex::operator float()
{
  return real;
}

istream& operator >> (istream& in,Complex& c)
{
  cout << endl << "Enter real part:" << endl;
  in >> c.real;
  cout << endl << "Enter image part: " << endl;
  in >> c.image;
  return in;
}

ostream& operator << (ostream& out,Complex& c)
{
  if(c.image < 0)
	out << c.real << "-" << fabs(c.image) << "i" << endl;
  else
	out << c.real << "+" << c.image << endl;
  return out;
}