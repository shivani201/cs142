#include <iostream>
using namespace std;

//generic programming - ignore

class Node
{
  public:
     //data
     int data;
     // pointer to the next Node
     Node *next;
     Node *data;
     // construct that makes the pointer to NULL
     Node(int value)
     { 
	next = NULL;
 	prev = NULL;
        data = value;
     }
};

class DLL
{
  public:
     Node *head;
     DLL()
     {
	head = NULL;
     }
     void insert(int value)
     {
	//create a new code
        Node *temp = new Node(value);
        // check if empty list
        if (head == NULL)
        {
	    head = temp;
        }
        else
        { // if not empty list.
           Node *current = head;
           while (current->next != NULL)
              current = current->next;
           current->next = temp;
           temp->prev = current;
        }
      }
      void display()
      {
	  Node *current = head;
          Node *last;
          while (current !=NULL)
          {
              cout << current->data << "->";
              current = current->next;
          }
          cout << endl;
      }
      int countItems()
      {
          Node *current = head;
          int i = 0;
          while (current !=NULL)
          {
              current = current->next;
              i++;
          }
          return i;
      }
      void InsertAt(int value, int pos)
      {
          if (pos < countItems())
          {
             // Create a new code 
             Node *temp = new Node(value);
             //check if empty list 
             if (head == NULL)
             {
                 head = temp;
             }
             else
             {  // if not empty list.
                  Node *current = head;
                  int i = 1;
                  while (i < pos)
     		  {
                      current = current->next;
                  current->next = temp;
                  temp->prev = current;
             }
      }
      void display()
      {
          Node *current = head;
          Node *last;
          while (current !=NULL)
          {
              cout << current->data << "->;
              current = current->next;
          }
          cout << endl;
      }
      int countItems()
      {
	  Node *current = head;
  	  int i = 0;
     	  while (current != NULL)
          {
              current = current->next;
              i++;
          }
          return i;
      }
      void InsertAt(int value, int pos)
      {
          if (pos < countItems())
          {
  	      // create a new node
	      Node *temp = new Node(value);
	      //check if empty list.
              if (head == NULL)
              {
                  head = temp;
              }
              else
              {  // if not empty list.
	          Node *current = head;
                  int i = 1;
                  while (i < pos)
                  {
                      current = current->next;
                      i++;
                  }
                  temp->next = current->next;
                  current->next = temp;
                  temp->prev = current;
                  temp->next->prev = temp;
             }
      }
      else
      {
	 cout << "the entered position does not exist" << endl;
      }
  }
  void DeleteAt(int pos)
  {
     Node *current = head
     int i = 1;
     while (i < pos)
     {
         current = current->next;
         i++;
     }
     current->prev->next = current->next;
     current->next->prev=current->prev;
  }
  void Del()
  {
     Node *current = head;
     //Deletes the last element.
     while (current->next !=NULL)
         current = current->next;
     current->prev->next = NULL;
  }
};

int main()
{
    DLL dlll;
    for (int i = 1; i < 11; i++)
    {
        dlll.insert(i);
    }
    dlll.display();
    dlll.insert(11);
    dlll.display();
    dlll.InsertAt(3,8);
    dlll.display();
    dlll.Del();
    dlll.display();
    cout<<dlll.countItems()<<endl;
    dlll.DeleteAt(5);
    dlll.display();
}
