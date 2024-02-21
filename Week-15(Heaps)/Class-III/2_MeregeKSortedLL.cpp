#include<iostream>
using namespace std;
#include<queue>
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    class compare{
    public:
        bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        //process first k element for every link list
        for(int i=0; i< lists.size(); i++){
            ListNode* listHead = lists[i];
            if(listHead != NULL){
                pq.push(listHead);
            }
        }

        // for new LL
        ListNode* head = NULL;
        ListNode* tail = NULL;

        //process the remaining Link list
        while(!pq.empty()){
            ListNode* topNode = pq.top();
            pq.pop();

            //ye topNode jo niakli hai toh ye hamri first node hai
            if(head == NULL){
                //Pheli node krte hai
                head = topNode;
                tail = topNode;
                if(tail->next != NULL){
                    pq.push(tail->next);
                }
            }
            else{
                //this is not a head node meaning pheli node ke baad koi node insert kr rhe ahi
                tail->next = topNode;
                tail = topNode;
                 if(tail->next != NULL){
                    pq.push(tail->next);
                }
            }
        }
        return head;
    }
};