/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 *
 * https://leetcode.cn/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (76.22%)
 * Likes:    3966
 * Dislikes: 0
 * Total Accepted:    2.5M
 * Total Submissions: 3.3M
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * 给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：head = [1,2,3,4,5]
 * 输出：[5,4,3,2,1]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：head = [1,2]
 * 输出：[2,1]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：head = []
 * 输出：[]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 链表中节点的数目范围是 [0, 5000]
 * -5000 
 * 
 * 
 * 
 * 
 * 进阶：链表可以选用迭代或递归方式完成反转。你能否用两种方法解决这道题？
 * 
 * 
 * 
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
        ListNode* reverseList(ListNode* head) {
            // ListNode* dummynode=new ListNode;
            // dummynode->next=head;
            // ListNode* realnode=head;
            // ListNode* tail;
            // while(realnode!=nullptr&&realnode->next!=nullptr){
            //     realnode=realnode->next;
            // }
            // tail=realnode;
            // ListNode* cur=dummynode;
            // while(dummynode->next!=tail){
            //     while(cur->next!=tail){
            //         cur=cur->next;
            //     }
            //     tail->next=cur;
            //     tail=cur;
            //     cur=dummynode->next;
            // }
            // if(tail!=nullptr)
            // tail->next=nullptr;
            // return realnode;

            //迭代
            // ListNode* cur=head;
            // ListNode* pre=nullptr;
            // ListNode* temp;
            
            // while(cur){
            //     temp=temp->next;
            //     cur->next=pre;
            //     pre=cur;
            //     cur=temp;
            // }
            // return pre;

            // 递归(迭代的人，递归的神)
            ListNode* cur=head;
            ListNode* pre=nullptr;
            return join(pre,head);
        }
        ListNode* join(ListNode* pre,ListNode* cur){
            if(cur==nullptr)
            return pre;
            else{
                ListNode* temp=cur->next;
                cur->next=pre;
                return join(cur,temp);
            }
        }
    };
// @lc code=end

