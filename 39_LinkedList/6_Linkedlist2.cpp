// ** Leetcode 237 - Delete Node in a linked list
// class Solution {
// public:
//     void deleteNode(ListNode* target) {
//         target->val = target->next->val;
//         target->next = target->next->next;
//     }
// };


// ** Leetcode 876 - Middle of LL

// M-1 - multiple passes are allowed
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int len = 0;
//         ListNode* temp = head;
//         // calculating length
//         while(temp!=NULL) {
//             len++;
//             temp = temp -> next;
//         }
//         int midIdx = len/2;
//         ListNode* mid = head;
//         for(int i=1; i<=midIdx; i++) {
//             mid = mid->next;
//         }
//         return mid;
//     }
// };

// M-2 - single pass is only allowed
// slow and fast pointer technique
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=NULL && fast->next!=NULL) {
//             slow = slow -> next;
//             fast = fast -> next -> next;
//         }
//         return slow;
//     }
// };


// ** Leetcode 19 - Remove nth node from the end of list 

// M-1 multiple pass
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len = 0;
//         ListNode* temp = head;
//         while(temp != NULL) {
//             len++;
//             temp = temp->next;
//         }

//         if(n==len) {
//             head = head->next;
//             return head;
//         }
        
//         // nth from end = (len-n+1) from start
//         int m = len-n+1;    
//         int idx = m-1;   // idx of node to be deleted
//         temp = head;
//         for(int i=1; i<=idx-1; i++) {
//             temp = temp -> next;
//         }
//         temp->next = temp->next->next;
//         return head;
//     }
// };

// M-2 Single Pass
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         // travers fast to (n+1) steps
//         for(int i=1; i<=n+1; i++) {
//             if(fast==NULL) return head->next;
//             fast = fast -> next;
//         }

//         // move slow and fast at same pace
//         while(fast!=NULL) {
//             slow = slow->next;
//             fast = fast->next;
//         }

//         // now the slow is exactly at the left og the nth node from end
//         slow->next = slow->next->next;
//         return head;
//     }
// };


// ** Leetcode 160 - Intersection of two linked list 
 
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* tempA = headA;
//         ListNode* tempB = headB;

//         // find the length
//         int lenA = 0;
//         while(tempA != NULL) {
//             lenA++;
//             tempA = tempA -> next;
//         }
//         int lenB = 0;
//         while(tempB != NULL) {
//             lenB++;
//             tempB = tempB -> next;
//         }

//         tempA = headA;
//         tempB = headB;
        
//         // checking which lenght is greater
//         // for tempA
//         if(lenA > lenB) {
//             int diff = lenA - lenB;
//             for(int i=1; i<=diff; i++) {
//                 tempA = tempA -> next;
//             }
//             while(tempA != tempB) {
//                 tempA = tempA->next;
//                 tempB = tempB->next;
//             }
//             return tempA;
//         }

//         // for tempB
//         else {  // lenA <= lenB
//             int diff = lenB - lenA;
//             for(int i=1; i<=diff; i++) {
//                 tempB = tempB -> next;
//             }
//             while(tempA != tempB) {
//                 tempA = tempA->next;
//                 tempB = tempB->next;
//             }
//             return tempB;
//         }
//     }
// };


// ** Linked List cycle - [ Leetcode-141 ]
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=NULL && fast->next!=NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };


// ** Linked List cycle II - [LC-142]
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         //  fast - 2 times, slow - 1 time
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool flag = false;  // no cycle

//         while(fast!=NULL && fast->next!=NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) {
//                 flag = true;    // cycle
//                 break;
//             }
//         }

//         if(flag==false) return NULL;
//         else {  // jab loop ho
//             ListNode* temp = head;
//             // jab tak slow aur temp equal nai ho jate tab tk -> next
//             while(temp != slow) {
//                 slow = slow->next;
//                 temp = temp->next;
//             }
//             return temp;
//         }

//     }
// };
