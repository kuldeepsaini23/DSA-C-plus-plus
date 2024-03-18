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

//* Merge Nodes in Between Zeroes
ListNode *mergeNodes(ListNode *head)
{
  // if (!head)
  //     return 0;

  // // Current pointer
  // ListNode* curr = head->next;
  // // Return ans Node;
  // ListNode* ans = new ListNode(-1);
  // ListNode* temp = ans;
  // int sum = 0;

  // // traversing linked list
  // while (curr) {
  //     if (curr->val == 0) {
  //         temp->next = new ListNode(sum);
  //         temp = temp->next;
  //         sum = 0;
  //         curr = curr->next;
  //     } else {
  //         sum += curr->val;
  //         curr = curr->next;
  //     }
  // }

  // return ans->next;

  // Method-2:slow -fast approach
  if (!head)
    return 0;

  ListNode *slow = head;
  ListNode *lastNode = 0;
  ListNode *fast = head->next;
  int sum = 0;

  while (fast)
  {
    if (fast->val == 0)
    {
      slow->val = sum;
      lastNode = slow;
      slow = slow->next;
      sum = 0;
    }
    else
    {
      sum += fast->val;
    }
    fast = fast->next;
  }

  lastNode->next = 0;
  while (slow)
  {
    ListNode *nxt = slow;
    slow = slow->next;
    delete nxt;
  }
  return head;
}

int main()
{

  ListNode *first = new ListNode(0);
  ListNode *second = new ListNode(20);
  ListNode *third = new ListNode(0);
  ListNode *fourth = new ListNode(10);
  ListNode *fifth = new ListNode(20);
  ListNode *six = new ListNode(0);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = six;
  six->next = nullptr;

  ListNode *head = first;

  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "Merge Nodes in Between Zeroes: " << endl;
  printLinkedList(mergeNodes(head));
  cout << endl;
  return 0;
}