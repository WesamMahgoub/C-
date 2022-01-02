#include <iostream>

using namespace std;

struct link //one element of list
{
int data; //data item
link* next; //pointer to next link
};
////////////////////////////////////////////////////////////////
class linklist //a list of links
{
private:
link* first; //pointer to first link
public:
linklist() //no-argument constructor
{ first = NULL; } //no first link
void additem(int d); //add data item (one link)
void display(); //display all links
int display_at(int pos);
int min();
};
//--------------------------------------------------------------
void linklist::additem(int d) //add data item
{
link* newlink = new link; //make a new link
newlink->data = d; //give it data
newlink->next = first; //it points to next link
first = newlink; //now first points to this
}
//--------------------------------------------------------------
void linklist::display() //display all links
{
link* current = first; //set ptr to first link
while( current != NULL ) //quit on last link
{
cout << current->data << endl; //print data
current = current->next; //move to next link
}
}
int linklist::min()
{
    link* max_value = first;
    link* min_value = max_value -> next;
    int final_min = max_value->data;
    while(max_value->next != NULL)
    {
        if (final_min > min_value->data)
            final_min = min_value->data;
            max_value = max_value->next;
            min_value = max_value->next;
    }
    return final_min;
}

int main()
{
    linklist li; //make linked list
li.additem(25); //add four items to list
li.additem(36);
li.additem(49);
li.additem(64);
li.display(); //display entire list
cout << li.min();
    return 0;
}
