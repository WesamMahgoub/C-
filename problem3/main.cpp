#include <iostream>

using namespace std;
// strplus.cpp
// overloaded ‘+’ operator concatenates strings
#include <string.h> //for strcpy(), strcat()
#include <stdlib.h> //for exit()
////////////////////////////////////////////////////////////////
class String //user-defined string type
{
private:
enum { SZ=80 }; //size of String objects
char str[SZ]; //holds a string
public:
String() //constructor, no args
{ strcpy(str, ""); }
String( char s[] ) //constructor, one arg
{ strcpy(str, s); }
void display() const //display the String
{ cout << str; }
String operator + (String ss) const //add Strings
{
String temp; //make a temporary String
if( strlen(str) + strlen(ss.str) < SZ )
{
strcpy(temp.str, str); //copy this string to temp
strcat(temp.str, ss.str); //add the argument string
}
else
{ cout << "\nString overflow"; exit(1); }
return temp; //return temp String
}
String operator += (String s) const //add Strings
{
if( strlen(str) + strlen(s.str) < SZ )
{
strcat(str, s.str); //add the argument string
}
else
{ cout << "\nString overflow"; exit(1); }
return String(str);
}
};
int main()
{
    String s1 = "\nMerry Christmas! "; //uses constructor 2
String s2 = "Happy new year!"; //uses constructor 2
String s3; //uses constructor 1
s1.display(); //display strings
cout << endl;
s2.display();
cout << endl;
s3.display();
cout << endl;
s3 = s1 + s2; //add s2 to s1,
//assign to s3
s3.display(); //display s3
cout << endl;
s1 += s2; //add s2 to s1,
s1.display(); //display s3
cout << endl;
s3 = s1 += s2; //add s2 to s1,
s3.display(); //display s3
cout << endl;
    return 0;
}
