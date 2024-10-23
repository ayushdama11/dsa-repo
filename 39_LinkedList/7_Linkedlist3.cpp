// ** Leetcode 83 - Remove duplicates from sorted list 

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
        // 0 ya 1 size ki ll ho 
//         if(head==NULL || head->next==NULL) return head;

//         ListNode* a = head;
//         ListNode* b = head->next;
//         while(b!=NULL) {
//             while(b!=NULL && (b->val == a->val)) {
//                 b = b->next;
//             }
//             a->next = b;
//             a=b;
//             if(b!=NULL) b = b->next;
//         }
//         return head;
//     }
// };


// ** Leetcode 61 - Rotate List

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         // find the length of the list
//         if(head==NULL || head->next==NULL) return head;
//         int n = 0;
//         ListNode* temp = head;
//         ListNode* tail = NULL;
//         while(temp!=NULL) {
//             if(temp -> next == NULL) tail = temp;
//             temp = temp -> next;
//             n++;
//         }
//         k = k % n;
//         if(k == 0) return head;

//         // place temp at (n-k)th posn , in index it will b n-k-1;
//         temp = head;
//         for(int i=1; i<n-k; i++) {
//             temp = temp->next;
//         }

//         // main algo
//         tail -> next = head;
//         head = temp -> next;
//         temp -> next = NULL;

//         return head;
//     }
// };


// ** Leetcode 2326 - Spiral Matrix IV

// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         vector< vector<int> > arr(m,vector<int> (n,-1));
//         int minr = 0;
//         int maxr = m-1;
//         int minc = 0;
//         int maxc = n-1;
//         ListNode* temp = head;

//         while(minr<=maxr && minc<=maxc) {
//             // right
//             for(int j=minc; j<=maxc; j++) {
//                 if(temp==NULL) return arr;
//                 arr[minr][j] = temp->val;
//                 temp = temp->next;
//             }
//             minr++;
//             if(minr>maxr || minc>maxc) break;

//             // down
//             for(int i=minr; i<=maxr; i++) {
//                 if(temp==NULL) return arr;
//                 arr[i][maxc] = temp->val;
//                 temp = temp->next;
//             }
//             maxc--;
//             if(minr>maxr || minc>maxc) break;

//             // left
//             for(int j=maxc; j>=minc; j--) {
//                 if(temp==NULL) return arr;
//                 arr[maxr][j] = temp->val;
//                 temp = temp->next;
//             }
//             maxr--;
//             if(minr>maxr || minc>maxc) break;

//             // top
//             for(int i=maxr; i>=minr; i--) {
//                 if(temp==NULL) return arr;
//                 arr[i][minc] = temp->val;
//                 temp = temp->next;
//             }
//             minc++;
//             if(minr>maxr || minc>maxc) break;
//         }

//         return arr;
//     }
// };


// ** Merge 2 Sorted Lists - Leetcode 21

// **** METHOD 1 *****
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         // SC = O(m+n)
//         ListNode* tempA = a;
//         ListNode* tempB = b;
        
//         // making a new node c
//         ListNode* c = new ListNode(-1);
//         ListNode* tempC = c;

//         while(tempA!=NULL && tempB!=NULL) {
//             if(tempA->val <= tempB->val) {  // c wali ll me a ke node ko add kro
//                 ListNode* t = new ListNode(tempA->val);
//                 tempC->next = t;
//                 tempC = t;
//                 tempA = tempA->next;
//             }
//             else {
//                 ListNode* t = new ListNode(tempB->val);
//                 tempC->next = t;
//                 tempC = t;
//                 tempB = tempB->next;
//             }
//         }
//         if(tempA == NULL) {
//             tempC -> next = tempB;
//         } else {
//             tempC -> next = tempA;
//         }

//         return c->next;     // kyuki pehla wala to ese hi banaya hai  
//     }
// };0

// **** METHOD 2 *****

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {

//         // making a new node c
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;

//         while(a!=NULL && b!=NULL) {
//             if(a->val <= b->val) {
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             }
//             else {  // b->val < a->val
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next = a;
//         return c->next;
//     }
// };


// ** Merge k sorted list - Leetcode 23 

// ***** Method 1 ****
// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL) {
//             if(a->val <= b->val) {
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             } 
//             else {
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a==NULL) temp->next = b;
//         else temp->next = a;
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         // empty ho to return null
//         if(arr.size()==0) return NULL;

//         while(arr.size()>1) {
//             // last k 2 ele pop back krke merge kro 
//             ListNode* a = arr[arr.size()-1];    // as it is vector so we can use size here
//             arr.pop_back();
//             ListNode* b = arr[arr.size()-1];
//             arr.pop_back();

//             // merge ll
//             ListNode* c = merge(a,b);
//             arr.push_back(c);   // will push the ele at the back
//         }
//         return arr[0];
//     }
// };


// ***** Method 2 ******
// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL) {
//             if(a->val <= b->val) {
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             } 
//             else {
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a==NULL) temp->next = b;
//         else temp->next = a;
//         return c->next;
//     }

//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         // empty ho to return null
//         if(arr.size()==0) return NULL;

//         while(arr.size()>1) {
//             // starting k 2 ele pop back krke merge kro 
//             ListNode* a = arr[0];    
//             arr.erase(arr.begin());     // pop_front - removing the first ele -> using erase
//             ListNode* b = arr[0];
//             arr.erase(arr.begin());

//             // merge ll
//             ListNode* c = merge(a,b);
//             arr.push_back(c);   // will push the ele at the back
//         }
//         return arr[0];
//     }
// };


// ** Sort List - Leetcode 148

// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL) {
//             if(a->val <= b->val) {
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             }
//             else {  // b->val < a->val
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next = a;
//         return c->next;
//     }

//     ListNode* sortList(ListNode* head) {
//         // base case
//         // ll size 0 or 1 
//         if(head==NULL || head->next == NULL) return head;

//         // find the "left middle" of the ll using slow and fast
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next!=NULL && fast->next->next!=NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         // now slow is at left middle
//         // break it into 2 parts
//         ListNode* a = head;
//         ListNode* b = slow->next;
//         slow->next = NULL;

//         // merge sort
//         a = sortList(a);
//         b = sortList(b);

//         // merge
//         ListNode* c = merge(a,b);
//         return c;
//     }
// };


// ** Leetcode 86 - Partition List 
