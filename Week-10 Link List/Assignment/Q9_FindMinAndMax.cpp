#include <iostream>
#include<vector>
#include<limits.h>
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

//* Find Mix and Max between Critical Points
vector<int> nodesBetweenCriticalPoints(ListNode *head)
{
  vector<int> ans = {-1, -1};
  ListNode *prev = head;
  if (!prev)
    return ans;
  ListNode *curr = head->next;
  if (!curr)
    return ans;
  ListNode *nxt = head->next->next;
  if (!nxt)
    return ans;

  int firstCP = -1;
  int lastCP = -1;
  int minDist = INT_MAX;
  int i = 1; // index for linked list

  while (nxt)
  {
    bool maxima = curr->val > prev->val && curr->val > nxt->val;
    bool minima = curr->val < prev->val && curr->val < nxt->val;
    bool isCP = ((maxima) || (minima)) ? true : false;

    if (isCP && firstCP == -1)
    {
      firstCP = i;
      lastCP = i;
    }
    else if (isCP)
    {
      minDist = min(minDist, (i - lastCP));
      lastCP = i;
    }
    i++;
    prev = curr;
    curr = nxt;
    nxt = nxt->next;
  }

  if (lastCP == firstCP)
  {
    return ans;
  }

  int maxDist = lastCP - firstCP;

  ans[0] = minDist;
  ans[1] = maxDist;

  return ans;
}

int main()
{

  ListNode *first = new ListNode(5);
  ListNode *second = new ListNode(3);
  ListNode *third = new ListNode(1);
  ListNode *fourth = new ListNode(2);
  ListNode *fifth = new ListNode(5);
  ListNode *six = new ListNode(1);
  ListNode *seven = new ListNode(2);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = six;
  six->next = seven;
  seven->next = nullptr;

  ListNode *head = first;

  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "Min and Max Between Critical Nodes: " << endl;
  vector<int> ans = nodesBetweenCriticalPoints(head);
  for(auto i:ans){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}