#include <iostream>
#include<bits/stdc++.h>
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

void printLinkedList(ListNode* head){
  ListNode* temp = head;

  while(temp != NULL){
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout<<endl;
}

//* Remove Zero Sum Consecutive Nodes from Linked List
void sanitizeMap(ListNode* curr,unordered_map<int,ListNode*> &mp, int csum){
  int temp = csum;
  while(true){
    temp += curr->val;
    if(temp == csum) break;
    mp.erase(temp);
    curr = curr->next;
  }
}


ListNode* removeZeroSumSublists(ListNode* head) {
  if(!head || (!head->next && head->val == 0)) return 0;
  unordered_map<int,ListNode*> mp;
  auto it = head;
  int csum = 0;
  while(it){
    csum += it->val;
    if(csum == 0){
      head = it->next;
      mp.clear();
    }
    else if(mp.find(csum) != mp.end()){
      sanitizeMap(mp[csum]->next,mp,csum);
      mp[csum]->next = it->next;
    }
    else{
      mp[csum] = it;
    }
          it = it->next;
  }

  return head;
}


 
int main(){
   ListNode *first = new ListNode(1);
  ListNode *second = new ListNode(2);
  ListNode *third = new ListNode(-3);
  ListNode *fourth = new ListNode(3);
  ListNode *fifth = new ListNode(1);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = nullptr;

  ListNode *head = first;

  //* Printing Linked List
  printLinkedList(head);
  cout << endl;

  //After Swapping
  cout << "Remove Zero Sum Consecutive Nodes from Linked List: " << endl;
  printLinkedList(removeZeroSumSublists(head));

      
 return 0;
}