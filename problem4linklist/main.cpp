#include <iostream>

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
int max()
{
    link* current = first;
    link* second = first->next;
    while (current != NULL)
    {
        if (current->data > second->data)
        second->data = current->data;
        current = current->next;
    }
    return second->data;
}
int min()
{
    link* current = first;
    link* second = first->next;
    while (current != NULL)
    {
        if (current->data < second->data)
        second->data = current->data;
        current = current->next;
    }
    return second->data;
}

int display_at(int pos)
{
    link* current = first;
    int counter = 0;
    while(current != NULL)
    {
        if(counter == pos)
        {
            return current->data;
        }
        current = current->next;
        counter++;
    }
    }                //display all links
    void delete_first()
    {
        first = first->next;
    }
    void delete_last()
    {
        link* last = first;
        link* pre_last = first->next;
        while(pre_last->next != NULL)
        {
           pre_last = pre_last->next;
           last = last->next;
        }
        last->next = pre_last->next;
    }
}; //-------------------------------------------------------------
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
li.display();
li.delete_first();
li.display();
li.delete_last();
li.display();
    return 0;
}
