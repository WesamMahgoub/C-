#include <iostream>
#include <process.h>
using namespace std;
struct link                           //one element of list
{ int data;                          //data item
link* next;                        //pointer to next link
}; ////////////////////////////////////////////////////////////////
class linklist                        //a list of links
{ private: link* first;                    //pointer to first link
public: linklist()                      //no-argument constructor
{ first = NULL; }            //no first link
void additem(int d);            //add data item (one link)
void display();
void delete_pos(int pos)
{
        link* last = first;
        link* pre_last = first->next;
        int counter = 2;
        if(pos == 0)
        {
            delete pre_last;
            exit(1);
        }
        while(pre_last != NULL)
        {
            if (pos == counter)
            {last->next = pre_last->next;}
           pre_last = pre_last->next;
           last = last->next;
           counter++;
        }
}
};
void linklist::additem(int d)         //add data item
{ link* newlink = new link;          //make a new link
 newlink->data = d;                 //give it data
 newlink->next = first;             //it points to next link
 first = newlink;                   //now first points to this
 } //-------------------------------------------------------------
 void linklist::display()              //display all links
 { link* current = first;             //set ptr to first link
 while( current != NULL )           //quit on last link
 { cout << current->data << endl;  //print data
 current = current->next;        //move to next link
 } }
int main()
{
    linklist li;       //make linked list
    li.additem(25);    //add four items to list
    li.additem(36);
    li.additem(49);
    li.additem(64);
    li.delete_pos(0);
    li.display();
    return 0;
}
