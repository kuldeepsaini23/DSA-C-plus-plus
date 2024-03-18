#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.*/
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLinkedList(ListNode *head)
{
  ListNode *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << endl;
}

//* Odd Even Linked List

ListNode *oddEvenList(ListNode *head)
{
  // Method1:
  //  ListNode* d1 = new ListNode();
  //  ListNode* d2 = new ListNode();
  //  ListNode *it1 = d1 , *it2 = d2;
  //  ListNode* temp = head;
  //  int index = 0;
  //  while(temp != NULL){
  //      if(index%2==0){
  //          it1->next = temp;
  //          index++;
  //          it1 = temp;
  //      }
  //      else{
  //          it2->next = temp;
  //          index++;
  //          it2 = temp;
  //      }
  //      temp = temp->next;
  //  }
  //  it1->next = NULL;
  //  it2->next = NULL;
  //  it1->next = d2->next;
  //  return d1->next;

  // Method-2:
  if (!head || head->next == 0)
    return head;
  ListNode *evenHead = head->next;
  ListNode *h1 = head;
  ListNode *h2 = head->next;

  while (h2 && h2->next)
  {
    h1->next = h2->next;
    h2->next = h2->next->next;
    h1 = h1->next;
    h2 = h2->next;
  }

  // Odd index vali list -> even list ka head
  h1->next = evenHead;
  return head;
}

int main()
{

  ListNode *first = new ListNode(10);
  ListNode *second = new ListNode(20);
  ListNode *third = new ListNode(30);
  ListNode *fourth = new ListNode(40);
  ListNode *fifth = new ListNode(50);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = nullptr;

  ListNode *head = first;

  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "Odd Even Linked List: " << endl;
  printLinkedList(oddEvenList(head));
  cout << endl;
  return 0;
}