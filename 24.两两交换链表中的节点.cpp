/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummynode=new ListNode;
        dummynode->next=head;
            ListNode* cur=dummynode;
            ListNode* left;
            ListNode* right;

            while(cur->next!=nullptr&&cur->next->next!=nullptr){
                left=cur->next;
                right=left->next;
                left->next=right->next;
                right->next=left;
                cur->next=right;
                cur=cur->next->next;
            }
            return dummynode->next;
    
    }
};
// @lc code=end

