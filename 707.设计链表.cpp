/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */


// @lc code=start
class MyLinkedList {
    struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x=0):val(x),next(nullptr){}
 };
    ListNode* dummyhead; // ✅ 类成员
    int size;            // ✅ 类成员

public:
    MyLinkedList() {
        dummyhead=new ListNode;
        size=0;
    }
    
    int get(int index) {
        if(index<0||index>size-1){
            return -1;
        }
        else{
            ListNode* cur = dummyhead->next;
            while(index--){
                cur=cur->next;
            }
            return cur->val;
        }
    }
    
    void addAtHead(int val) {
        ListNode* newnode=new ListNode;
        newnode->val=val;
        newnode->next=dummyhead->next;
        dummyhead->next=newnode;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* newnode=new ListNode;
        newnode->val=val;
        newnode->next=nullptr;
        ListNode* cur=dummyhead;
        while(cur->next!=nullptr){
            cur=cur->next;
        }
        cur->next=newnode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
            return ;
        else if(size<0)
            size = 0;
        else{
            ListNode* cur=dummyhead;
            ListNode* newnode=new ListNode;
            newnode->val=val;
            while(index--){
                cur=cur->next;
            }
            newnode->next=cur->next;
            cur->next=newnode;
            size++;
            return ;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>size-1)
        return ;
        else{
            ListNode* cur=dummyhead;
            while(index--){
                cur=cur->next;
            }
            cur->next=cur->next->next;
            size--;
            return ;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

