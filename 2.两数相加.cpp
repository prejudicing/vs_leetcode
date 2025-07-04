/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
<<<<<<< HEAD
    ListNode *p1 = l1;
    ListNode* p2 = l2;
    ListNode* p3 = new ListNode;
    ListNode* l3=p3;

    int jinwei = 0;
    while (!(p1 == nullptr && p2 == nullptr && jinwei==0)) {
	    ListNode* m = new ListNode;
        m->val=jinwei;
	    p3->next = m;
        int a=0,b=0;
        if(p1!=nullptr){
            a=p1->val;
        }
        if(p2!=nullptr){
            b=p2->val;
        }

	    m->val = m->val + a + b;
	    jinwei = m->val / 10;
	    m->val = m->val % 10;
	    p3 = m;
        if(p1==nullptr)
            p1=nullptr;
        else
	        p1 = p1->next;
	    if(p2==nullptr)
            p2 =nullptr;
        else
	        p2 = p2->next;
    }
    
    return l3->next;

// 250704
