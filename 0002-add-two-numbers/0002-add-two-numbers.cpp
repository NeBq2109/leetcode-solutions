/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* nextPointerL1 = l1;
    ListNode* nextPointerL2 = l2;

    ListNode* Head = new ListNode(0);
    ListNode* nextPointerAns = Head;

    unsigned short residual = 0, L1Val = 0, L2Val = 0, sum = 0;
    while(nextPointerL1 != nullptr ||nextPointerL2 != nullptr || residual != 0)
    {
        if(nextPointerL1 != nullptr)
        {
            L1Val = nextPointerL1->val;
            nextPointerL1 = nextPointerL1->next;
        }
        else
        {
            L1Val = 0;
        }
        if(nextPointerL2 != nullptr)
        {
            L2Val = nextPointerL2->val;
            nextPointerL2 = nextPointerL2->next;
        }
        else
        {
            L2Val = 0;
        }
        sum = L1Val + L2Val + residual;
        residual = sum / 10;
        sum%=10;


        nextPointerAns->next = new ListNode(sum);
        nextPointerAns = nextPointerAns->next;

    }

    ListNode* answer = Head->next;
    delete Head;

    return answer;
    }
};