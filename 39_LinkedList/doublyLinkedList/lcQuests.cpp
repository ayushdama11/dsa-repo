// ** Leetcode 725 - Split Linked List in Parts

// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         // find the length of the original ll
//         int n = 0;
//         ListNode* temp = head;
//         while(temp) {
//             temp = temp->next;
//             n++;
//         }

//         // breaking the original list into k lists
//         vector<ListNode*> ans;      // vector containing the answers 
//         int size = n/k;     // size of each part
//         int rem = n%k;  // for remaining ele
//         temp = head;
//         while(temp) {
//             ListNode* c = new ListNode(100);
//             ListNode* tempC = c;

//             // for extra size when there are remaining elements
//             int s = size;
//             if(rem > 0) s++;
//             rem--;

//             for(int i=1; i<=s; i++) {
//                 tempC->next = temp;
//                 temp = temp->next;
//                 tempC = tempC->next;
//             }
//             tempC->next = NULL;     // list is broken now 
//             ans.push_back(c->next);     // farzi node ke next ko push kkardo 
//         }

//         // 
//         if(ans.size() < k) {    // than push back null 
//             int extra = k - ans.size();
//             for(int i=1; i<=extra; i++) {
//                 ans.push_back(NULL);
//             }
//         }
//         return ans;
//     }
// };


// ** Leetcode 2058 - Find the Minimum and Maximum Number of Nodes Between Critical Points

// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int idx = 1;
//         int fidx = -1;  // first index
//         int sidx = -1;  // second index
//         ListNode* a = head;
//         ListNode* b = head->next;
//         ListNode* c = head->next->next;
//         if(c==NULL) return {-1,-1};

//         // *** calculating max_dist *****
//         while(c) {
//             if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val) {
//                 // ye ek critical point hai
//                 // matlab hame abhi tk pehla critical point nai mila 
//                 if(fidx==-1) fidx = idx;
//                 else sidx = idx  ;        // pehla critical pt mil gaya
//             }
//             a = a->next;
//             b = b->next;
//             c = c->next;
//             idx++;
//         }
//         // agar sirf ek hi critical point hai ll me
//         if(sidx==-1) return {-1,-1};
//         // calculating distances
//         int maxd = sidx - fidx;

//         // *** calculating min_dist ***
//         int mind = INT_MAX;
//         fidx = -1;
//         sidx = -1;
//         idx = 1;
//         a = head;
//         b = head->next;
//         c = head->next->next;
//         while(c) {
//             if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val) {
//                 // ye ek critical point hai
//                 fidx = sidx;    // jo b hamara last critical point hoga uske phle wala chahie
//                 sidx = idx;
//                 if(fidx!=-1){
//                     int d = sidx - fidx;
//                     mind = min(mind,d);
//                 } 
//             }
//             a = a->next;
//             b = b->next;
//             c = c->next;
//             idx++;
//         }
//         return {mind,maxd};
//     }
// };


// ** Leetcode 2074 - Reverse Nodes in Even length groups
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newHead;
//     }
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right) return head;
//         ListNode* a = NULL;
//         ListNode* b = NULL;
//         ListNode* c = NULL;
//         ListNode* d = NULL;
//         ListNode* temp = head;
//         int n = 1;
//         while(temp) {
//             if(n==left-1) a = temp;
//             if(n==left) b = temp;
//             if(n==right) c = temp;
//             if(n==right+1) d = temp;
//             temp = temp->next;
//             n++;
//         }
//         if(a) a->next = NULL;
//         if(c) c->next = NULL;
//         c = reverseList(b);
//         if(a) a->next = c;
//         b->next = d;
//         // agar a mera null nai h, matlab b k aage b kuch hai tab hame head return krna hai
//         if(a) return head;
//         return c;
//     }

//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* temp = head;
//         int gap = 1;
//         while(temp && temp->next) { 
//             int remLen = 0;
//             ListNode* t = temp->next;
//             for(int i=1; i<=gap+1 && t!=NULL; i++) {
//                 t = t->next;
//                 remLen++;
//             }
//             if(remLen < gap+1) gap = remLen - 1;    // basically ham gap ko even bana dege taki wo reverse na hoo

//             if(gap%2!=0) reverseBetween (temp,2,gap+2);  // jab gap odd ho tab hi reverse karna hai 
//             gap++;
//             for(int i=1; temp!=NULL && i<=gap; i++) {
//                 temp = temp->next;
//             }
//         }
//         return head;
//     }
// };


// ** Leetcode 138 - Copy List with Random Pointer

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // step 1 - create a "deep copy" assigning random pointer to NULL
//         Node* dummy = new Node(0);
//         Node* tempC = dummy;
//         Node* temp = head;
//         while(temp) {
//             Node* a = new Node(temp->val);
//             tempC->next = a;
//             tempC = tempC->next;
//             temp = temp->next;
//         }
//         Node* duplicate = dummy->next;  // jo hamne duplicate wali ll banai 

//         // step 2 - alternate connections [merging]
//         Node* a = head; 
//         Node* b = duplicate;
//         dummy = new Node(-1);
//         Node* tempD = dummy;
//         while(a) {  // we can also write b here
//             tempD->next = a;
//             a = a->next;
//             tempD = tempD->next;
//             tempD->next = b;
//             b = b->next;
//             tempD = tempD->next;
//         }
//         dummy = dummy->next;

//         // step 3 - assigning random pointer to duplicate ll
//         Node* t1 = dummy;   // t1 will traverse in original list
//         while(t1) {
//             Node* t2 = t1->next;  // t2 traverse on duplicate
//             if(t1->random) t2->random = t1->random->next;
//             t1 = t1->next->next;
//         }

//         // step 4 - removing connections - seperate karna hai 
//         Node* d1 = new Node(-1);
//         Node* d2 = new Node(-1);
//         t1 = d1;
//         Node* t2 = d2;
//         Node* t = dummy;
//         while(t) {
//             // for t1
//             t1->next = t;
//             t = t->next;
//             t1 = t1->next;

//             // for t2
//             t2->next = t;
//             t = t->next;
//             t2 = t2->next;
//         }
//         t1->next = NULL;
//         t2->next = NULL;
//         d1 = d1->next;  // original with random
//         d2 = d2->next;  // duplicate with random
//         return d2;
//     }    
// };


// ** Leetcode 430 - Flatten a multilevel doubly linked list 

// class Solution {
// public:
//     Node* flatten(Node* head) {
//         Node* temp = head;
//         while(temp!=NULL) {
//             Node* a = temp->next;
//             if(temp->child!=NULL) {
//                 Node* c = temp->child;
//                 temp->child = NULL;
//                 c = flatten(c); // recursion 
//                 temp->next = c;
//                 c->prev = temp;
//                 while(c->next!=NULL) {
//                     c = c->next;
//                 }
//                 c->next = a;
// // if(a) islie qki a hamara null ho skata hai matlab last node - aur null ka prev nai hota
//                 if(a) a->prev = c;     
//             }
//             temp = a;
//         }
//         return head;
//     }
// };