#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>

using namespace std;




class ListNode {
private:
string A;
ListNode *next;

public:
ListNode (string b)
{
  A = b;
  next = NULL;
}
ListNode* getNext() 
{ 
    return next;
}
void setNext(ListNode *n) 
{
    next = n;
}
string getItem() 
{
    return A;
}
};

class List 
{
private:
ListNode *head;
ListNode *tail;

public:
List()
{
 head = NULL;
 tail = NULL;
}

void push_back(string A)
{
    ListNode *node = new ListNode(A);
    if (head == NULL)
    {
        head= node;
        tail= node;
    }
    else 
    {
        tail->setNext(node);
        tail=node;
    }
}

string remove_front()
{
  if(head == NULL)
  {
      return "";
  }

 else 
    {
    string C = head -> getItem();
    head= head -> getNext();
    return C;
    }

}
~List()
{
    ListNode* last = head;
    while(last != NULL)
    {
        remove_front();
        head = head -> getNext();
        last = head;
    }
}
  string get(int g)
 {
    int i;
    ListNode* first = head;
    if (first== NULL)
    {
        return "";
    }
     string c;
    for(i=0; first!=NULL; i++)
    {
      if (i == g)
      {
        break;
      }
      c = first -> getItem();
     first = first -> getNext();
    }
    return c;
  }

int length()
{
    int i;
    ListNode* first = head;

    if (first == NULL)
    {
        return 0;
    }
    for(i=0; first!=NULL; i=i+1)
    {
        first=first->getNext();
    }
   return i;
}
};

int main ()
{
    ListNode S("find");
    ListNode N("got");
    List* NEW=new List;
    string B=S.getItem();
    string X=N.getItem();
    NEW->push_back(B);
    NEW->push_back(X);
    
  return 0;
}





