#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//* Next Greater Node In Linked List

vector<int> nextLargerNodes(ListNode *head)
{
  // storing index in stack
  stack<int> st;
  vector<int> temp;
  ListNode *ptr = head;
  while (ptr)
  {
    temp.push_back(ptr->val);
    ptr = ptr->next;
  }
  // vector<int> ans(temp.size());

  // for (int i = 0; i < temp.size(); i++) {
  //     while (!st.empty() && temp[i] > temp[st.top()]) {
  //         ans[st.top()] = temp[i];
  //         st.pop();
  //     }
  //     st.push(i);
  // }
  // return ans;

  for (int i = 0; i < temp.size(); i++)
  {
    while (!st.empty() && temp[i] > temp[st.top()])
    {
      temp[st.top()] = temp[i];
      st.pop();
    }
    st.push(i);
  }

  while (!st.empty())
  {
    temp[st.top()] = 0;
    st.pop();
  }

  temp[temp.size() - 1] = 0;

  return temp;
}

int main()
{
  ListNode* one = new ListNode(2);
  ListNode* two = new ListNode(1);
  ListNode* three = new ListNode(5);
  one->next = two;
  two->next = three;
  three->next = nullptr;

  vector<int> ans = nextLargerNodes(one);

  for(auto i:ans){
    cout << i <<" ";
  }

  return 0;
}