#include <iostream>

using namespace std;
#include <string.h>      //for strcpy(), strcat()
#include <stdlib.h>      //for exit()

class String             //user-defined string type
{ private: enum { SZ=80 };                //size of String objects
char str[SZ];                  //holds a string
public: String()                       //constructor, no args
{ strcpy(str, ""); } String( char s[] )             //constructor, one arg
{ strcpy(str, s); } void display() const           //display the String
{ cout << str; }
String operator += (String ss) const  //add Strings

{
if( strlen(str) + strlen(ss.str) < SZ ) {
strcat(str, ss.str);
} else { cout << "\nString overflow"; exit(1); } return String(str);
}
};
int main()
{ String s1 = "\nMerry Christmas!  ";   //uses constructor 2
String s2 = "Happy new year!";        //uses constructor 2
String s3;                            //uses constructor 1
s1.display();                         //display strings
s2.display();
s1 += s2;
s3 = s1 += s2;
     s1.display();                         //display strings
s2.display();                   //add s2 to s1, //assign to s3
s3.display();                         //display s3
cout << endl;



    return 0;
}
