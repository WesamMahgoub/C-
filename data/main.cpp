#include <iostream>

using namespace std;

class StudCors
{
private:
    int ID;
    string Student_Name;
    string Course_Name;
    int array[10];
public:
    StudCors(int id = 0,const string& studentname = " ",const string& coursename = " "): ID(id), Student_Name(studentname), Course_Name(coursename)
    {}
    bool operator >(StudCors& stud1)const //O(1)
    {
        return ID > stud1.ID;
    }
    bool operator ==(StudCors& stud1)const //O(1)
    {
        return ID == stud1.ID && Course_Name == stud1.Course_Name;
    }
    int getID()const //O(1)
    {
        return ID;
    }
    const string& getStudentName()const //O(1)
    {
        return Student_Name;
    }
    const string& getCourseName()const //O(1)
    {
        return Course_Name;
    }

};

class link
{
    private:
    StudCors student;
    link* next;
    friend class LinkedBinaryTree;
    friend class Record;
};

class Record
{
private:
    link* head;
public:
    Record(): head(NULL)
    {}
    ~Record() //O(n)
    {
        while(!empty())
             removeStudCors();
    }
    bool empty()const //O(1)
    {
        return head == NULL;
    }
    const StudCors& front()const //O(1)
    {
        return head->student;
    }
    void addStudCors(const StudCors& stud1) //O(1)
    { // function to add new student course in the linked list
        link* newlink = new link;
        newlink->student = stud1;
        newlink->next = head;
        head = newlink;
    }
    void removeStudCors() //O(1)
    {// function to remove a student course in the linked list
        link* old = head;
        head = old->next;
        cout << "delete is done" << endl ;
        delete old;
    }
    void record_print() //O(n)
    {// function to print all student courses at the linked list
        link* newlink = head;
        while(newlink != NULL)
        {
            cout << newlink->student.getID() << endl << newlink->student.getStudentName() << endl << newlink->student.getCourseName() << endl;
            newlink = newlink->next;
        }
    }
    void remove_link(link* unwanted_link) //O(n)
    {// function to delete a link (student course) from the student record or list(student file)
        if(unwanted_link == head)//if the link is the head of the linked list
        {
            removeStudCors();// call the function that remove front
        }
        link* first = head;
        while(first != NULL)
        {
            if(first->next == unwanted_link)
            {
                first->next = unwanted_link->next;
                delete unwanted_link;
                break;
            }
            first = first->next;
        }
    }
    friend class LinkedBinaryTree;
};


class LinkedBinaryTree
{

protected:
    class Node
{
    public:
    Record start;
    Node* parent;
    Node* left;
    Node* right;

    Node(): start(), parent(NULL), left(NULL), right(NULL)
    {}

    friend class LinkedBinaryTree;

};

private:
    Node* root;// first node in the tree
    int n;// size of the tree

public:
    LinkedBinaryTree(): root(NULL), n(0)
    {}

    int size() const //O(1)
    {
        return n;
    }
    bool empty() const //O(1)
    {
        return size() == 0;
    }
void insert(const Record& newrecord) //O(n)
{// function to insert new node for the given record
    Node* newnode = new Node;// make a new node for the given record
    Node* current;
    Node* current_parent;
    char check;// variable is used for searching and pass through nodes from left to right
    newnode->start = newrecord;// assign the given record to the node
    newnode->left = NULL;// all pointers are NULL as the node has not inserted to the tree yet
    newnode->right = NULL;
    newnode->parent = NULL;

    if(root == NULL)// if the first node
    {
        root = newnode;// add the new node in the root
        n++;// increase the size of the tree
        cout << "i am a root" << endl;
    }
    else
    {// for all other nodes
        current = root;// start searching for null from root
        current_parent = NULL;
        check = 'L';// the next node is the left node
        while(1)
        {// loop until return
            //current_parent = current;
            if(check == 'L')// if we are in the left node
            {
                current->parent = current;//go down to the next level
                current = current->left;// go to the left node
                check = 'R';// the next node is the right node
                if(current == NULL)
                {//if the current node(left node) is empty
                    current_parent->left = newnode;// add the new node to current node
                    cout << "i am in left" << endl;
                    n++;// increase the size of the tree
                    return;// end the function
                }
            }
            else
            {// if we are in the right node
                current = current->right;// go to the right node
                check = 'L';// the next node is the left
                if(current == NULL)
                {//if the current node(right node) is empty
                    current_parent->right = newnode;// add the new node to current node
                    cout << "i am in right" << endl;
                    n++;// increase the number of nodes (tree size)
                    return;// end the function
                }
            }

        }
    }
}

void add_StudCors(const StudCors& newstudent) //O(n)+O(n) = O(n)
{
    Node* first = root;// start searching from the root
    char check = 'L';// the next node is the left node
    while (first != NULL)
        {// go through the tree until the end
        if(newstudent.getID() == first->start.front().getID())// if the given student's ID is identical to that of the node's record
        {
            first->start.addStudCors(newstudent);// add the student course to his file(record)
            cout << "There is a record for this ID" << endl;
            return;// end the function
        }
        if (check == 'L')// if we are in the left node
        {
            check = 'R';// the next node is the right node
            first->parent = first;// go down to the next level
            first = first->left;// go to the left node
        }
        else
        {// if we are in the right node
            check = 'L';// the next node is the left
            first = first->right;// go to the right node
        }
    }// if the student does not have a record
    Record* extra_record = new Record;// make a new one to him(save a location in the memory to his record)
    extra_record->addStudCors(newstudent);// add the student course at his new record
    cout << "This student does not have a record" << endl;
    insert(*extra_record);// inset a new node for the student record at a leaf of the tree
}


Record* get_Record(int newID) //O(n)
{
    Node* first = root;// start searching from the root
    char check = 'L';// the next node is the left node
    while (first != NULL)
        {// go through the tree until the end
        if(newID == first->start.front().getID())// if the given ID is identical to that of the node's record
        {
            cout << "It is a pointer to a record " << endl;
            return &(first->start);// return a pointer to the record of that student
        }
        if (check == 'L')// if we are in the left node
        {
            check = 'R';// the next node is the right node
            first->parent = first;// go down to the next level
            first = first->left;// go to the left node
        }
        else
        {// if we are in the right node
            check = 'L';// the next node is the left
            first = first->right;// go to the right node
        }
    }
    cout << "This ID has no Record" << endl;
    return 0;
}

bool get_Course(int newID,const string& newcourse)//O(n^2)
{
    Node* first = root;// start searching from the root
    char check = 'L';// the next node is the left node
    while (first != NULL) // go through the the tree until the end(leaf)
        {// start searching at the record (node itself)
        link* newlink = new link;// make a pointer to link to search at the record
        newlink = first->start.head;// start from the head of the linked list (student record)
            while(newlink != NULL)
            {// while the linked list (record) is not empty
                if(newID == newlink->student.getID() && newcourse == newlink->student.getCourseName())
                    {// if the given ID and course name is identical to those of node's record
                        cout << "This ID has this course" << endl;
                        return true;
                    }
                newlink = newlink->next;// complete searching by passing through the linked list if the student course has not found yet
            }
        if (check == 'L')// if we are in the left node
        {
            check = 'R';// the next node is right
            first->parent = first;// go down through the tree to the next level
            first = first->left;// go to the left node
        }
        else
        {// if we are in the right node
            check = 'L';// the next node is left
            first = first->left;// go to the right node
        }
    }
    cout << "This ID doesn't have this course" << endl;
    return false;
}
void remove_Node(Node* deleted_Node)//O(1)
{
    if(deleted_Node->left == NULL && deleted_Node->right == NULL)// if the node is a leaf
    {
        if(deleted_Node->parent->left == deleted_Node)// if the node is at the left of its parent(left child)
        {
            deleted_Node->parent->left = NULL;// make its parent pointer equal zero
        }
        else if(deleted_Node->parent->right == deleted_Node)// if the node is at the right of its parent(right child)
        {
            deleted_Node->parent->right = deleted_Node;// make its parent pointer equal zero
        }
        delete deleted_Node;// free the node memory
    }
        else if(deleted_Node->left == NULL && deleted_Node->right == NULL && deleted_Node->parent == NULL)// if the node is the root
            delete deleted_Node;// free the node memory
        else if(deleted_Node->left->left == NULL && deleted_Node->left->right == NULL)// if its left child is external
        {
            deleted_Node->right->parent = deleted_Node->parent;// the right child parent is a sibling to the the node's parent
            deleted_Node->parent = deleted_Node->right;// the node's parent is the right child
            delete deleted_Node->left;// free the node's external child memory
            delete deleted_Node;// free the node memory
        }
        else if(deleted_Node->right->left == NULL && deleted_Node->right->right == NULL)
        {
            deleted_Node->left->parent = deleted_Node->parent;// the left child parent is a sibling to the the node's parent
            deleted_Node->parent = deleted_Node->left;// the node's parent is the left child
            delete deleted_Node->right;// free the node's external child memory
            delete deleted_Node;// free the node memory
        }
    n--;// decrease the size of the tree
}

   void remove_StudCors(const StudCors& newstudent)//O(n^2)
   {
       Node* search_node = root;
       char check = 'L';
       while(search_node != NULL)
       {
           link* newlink = new link;
           newlink = search_node->start.head;
           while(newlink != NULL)
           {
               if(newlink->student.getID() == newstudent.getID() && newlink->student.getCourseName() == newstudent.getCourseName())
               {
                   search_node->start.remove_link(newlink);// remove the student course (link) from the his record
                   cout << "This student is removed " << endl;
                   break;
               }
                newlink = newlink->next;
           }
           if(search_node->start.empty())// if the node is empty
                      {
                    cout << "empty" << endl;
                    remove_Node(search_node);// remove the node
                    break;// end the node loop
                       }
        if(check == 'L')
        {
            check = 'R';
            search_node->parent = search_node;
            search_node = search_node->left;
        }
        else
        {
            check = 'L';
            search_node = search_node->right;
        }
    }
}

   void print() //O(n^2)
   {
       Node* first = root;// start printing from root
       char check = 'L';// the second node is the left node
       cout << "The tree has " << endl;
       while(first != NULL)
       {// go through the tree until the end(leaf)
           first->start.record_print();// function to print the student record with all parameters(id,student name,course name)
          if(check == 'L')
          {// if we are in the left node
              check = 'R';// the next node is the right node
              first = first->left;// go to left node
          }
          else
          {// if we are in the right node
              check = 'L';// the next node is the left node
              first = first->right;// go to right node
          }
       }
   cout << "The size of the tree is " << size() << endl;// at the end of printing the tree, it will print its size
   }
};

int main()
{
    StudCors student1(1,"wesam","control");
    StudCors student2(2,"fatma","microprocessor");
    StudCors student3(3,"nada","control");
    StudCors student4(1,"wesam","microprocessor");
    StudCors student5(3,"nada","microprocessor");

    LinkedBinaryTree tree;

             tree.add_StudCors(student1);
             tree.add_StudCors(student2);
             tree.add_StudCors(student3);
             tree.add_StudCors(student4);
             tree.add_StudCors(student5);
             cout << tree.get_Record(1)->front().getStudentName() << endl;
             cout << tree.get_Course(1,"control") << endl;
             cout << tree.get_Course(2,"data") << endl;
             tree.print();
             tree.remove_StudCors(student5);
             tree.print();
             tree.remove_StudCors(student2);
             tree.print();
             tree.remove_StudCors(student3);
             tree.print();
             tree.remove_StudCors(student1);
             tree.print();
             tree.remove_StudCors(student4);
             tree.print();


    return 0;
}
