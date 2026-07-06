#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k==0){
        return head;
    }
    struct ListNode* tail = head;
    int len = 1;
    while  (tail->next){
        tail = tail->next;
        len++;
    }
    k=k%len;
    if(k==0){
        return head;
    }
    tail->next = head;
    struct ListNode* new_tail = head;
    for(int i =1; i< len-k;i++){
        new_tail = new_tail->next;
    }
    struct ListNode* new_head = new_tail->next;
    new_tail->next = NULL;
    return new_head;
}