#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class MyArray
{
  private:
	int size;
	int* data;
  public:
	MyArray(int size)
	{
	  this->size = size;
	  data = new int[size];
	  cout << "constructor" << endl;
	}
	MyArray(MyArray& m)
	{
	  m.size = size;
	  for(int i=0;i<size;i++)
	  {
		m.data[i] = data[i];
	  }
	  cout << "copy constructor" << endl;
	  getch();
	}
	~MyArray()
	{
	  delete[] data;
	  cout << "destructor" << endl;
	  getch();
	}

	int& operator[](int index)
	{
	  if(index < size)
		return data[index];
	  else
	  {
		cout << "Array out of boundary" << endl;
		getch();
		exit(1);
	  }
	}
};
void main()
{
  clrscr();

  MyArray arr(5);

  for(int i=0;i<5;i++)
  {
	cin >> arr[i];
  }

  for(int j=0;j<5;j++)
  {
	cout << arr[j] << endl;
  }
  getch();
}