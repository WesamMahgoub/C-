#include <iostream>
#include <cstring> //for strcpy(), etc
#include <CCTYPE>
using namespace std;

class String //user-defined string type
{
private:
char* str; //pointer to string
public:
String(char* s) //constructor, one arg
{
int length = strlen(s); //length of string argument
str = new char[length+1]; //get memory
strcpy(str, s); //copy argument to it
}
char upit()
{
    for(int i=0;i<=strlen(str);i++)
    {
        str = toupper(*(str+i));
    }
   return String(str);
}
~String() //destructor
{
cout << "Deleting str.\n";
delete[] str; //release memory
}
void display() //display the String
{
cout << str << endl;
}

};

int main()
{
    String s1 = "Who knows nothing doubts nothing.";
    cout << "s1="; //display string
    s1.display();
    cout << s1.upit();
    return 0;
}
