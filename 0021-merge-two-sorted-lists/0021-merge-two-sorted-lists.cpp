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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
    auto pt1 = list1, pt2 = list2;

    if(pt1 == NULL) return pt2;
    if(pt2 == NULL) return pt1;

    ListNode* headMergedList = new ListNode();
    ListNode* mergedList = headMergedList;
    while(true)
    {
        if(pt1 != NULL && pt2 != NULL)
        {
            if(pt1->val > pt2->val)
            {
                headMergedList -> next = pt2;
                pt2 = pt2->next;
            }
            else
            {
                headMergedList -> next = pt1;
                pt1 = pt1->next;
            }
            headMergedList = headMergedList -> next;
        }
        else if(pt2 != NULL)
        {
            headMergedList -> next = pt2;
            break;
        }
        else if(pt1 != NULL)
        {
            headMergedList -> next = pt1;
            break;
        }


    }
    headMergedList = mergedList -> next;
    delete mergedList;

    return headMergedList;
        
    }
};