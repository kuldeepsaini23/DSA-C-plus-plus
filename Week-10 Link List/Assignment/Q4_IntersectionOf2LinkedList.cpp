
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    int getLength(ListNode* head){
        ListNode* itr = head;
        int length = 1;
        while(itr->next != nullptr){
            length++;
            itr = itr->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int LenA = getLength(headA);
        int LenB = getLength(headB);

        ListNode *itr1 = headA;
        ListNode *itr2 = headB;
        
        while(LenA < LenB){
            if(LenB == 0) break;
            LenB--;
            itr2 = itr2->next;
        }

        while(LenB < LenA){
            if(LenA == 0) break;
            LenA--;
            itr1 = itr1->next;
        }

        while(itr1 != itr2){
            if(!itr1 || ! itr2){
                return nullptr;
            }
            itr1 = itr1->next;
            itr2 = itr2->next;
        }
        
        return itr1;
    }
};