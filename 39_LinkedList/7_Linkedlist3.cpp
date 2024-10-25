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
//      // creting a vector with m rows and n columns
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

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* lo = new ListNode(100);
//         ListNode* hi = new ListNode(100);
//         ListNode* tempLo = lo;  // pointer pointing to lo
//         ListNode* tempHi = hi;  // pointer poitning to hi
//         ListNode* temp = head;  // pointer pointing to head
//         while (temp!=NULL) {
//             if(temp->val < x) {
//                 tempLo->next = temp;
//                 temp = temp->next;
//                 tempLo = tempLo->next;
//             }
//             else {  // temp->val > x
//                 tempHi->next = temp;
//                 temp = temp->next;
//                 tempHi = tempHi->next;
//             }
//         }

//         tempLo->next = hi->next;
//         tempHi->next = NULL;    // last node 

//         return lo->next;
//     }
// };


// ** Odd Even Linked List - Leetcode 328

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(!head || !head->next) return head;

//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;

//         while(even && even->next) {
//             odd->next = even->next;
//             odd = odd->next;    
//             even->next = odd->next;
//             even = even->next;
//         }

//         odd->next = evenHead;
//         return head;
//     }
// };


// ** Reverse Linked list - leetcode 206

// ** Method 1 - Iterative
// class Solution {    // O(N^2)
// public:
//     ListNode* getNodeAt(ListNode* head, int idx) {
//         ListNode* temp = head;
//         // 1 2 3 4 5 
//         for(int i = 1; i<=idx; i++) {
//             temp = temp->next;
//         }
//         return temp;
//     }
//     ListNode* reverseList(ListNode* head) {
//         int n = 0;
//         ListNode* temp = head;
//         while(temp) {
//             temp = temp->next;
//             n++;
//         }
//         int i = 0;
//         int j = n-1;
//         while(i<j) {
//             ListNode* left = getNodeAt(head,i);
//             ListNode* right = getNodeAt(head,j);
//             int t = left->val;
//             left->val = right->val;
//             right->val  = t;
//             i++;
//             j--;
//         }
//         return head;
//     }
// };

// ** Method 2 - iterative

// class Solution {     // tc - O(N) , sc - O(1)
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;

//         while(curr) {
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }

//         return prev;
//     }
// };

// ** Method 3 - recursive

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         // base case - if size is 0 or 1
//         if(head==NULL || head->next==NULL) return head;

//         // head ke next se end tak sabko recursively reverse krdoo
//         ListNode* newHead = reverseList(head->next);

//         // iteratively reversing first and second node 
//         head->next->next = head;
//         head->next = NULL;
//         return newHead;
//     }
// };



// **** Leetcode 234 - Palindrome linked list

// ** Method 1 : ( tc - O(N) , sc - O(N) )
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev = NULL, *curr = head, *Next = head;
//         while(curr) {
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         ListNode* c = new ListNode(100);
//         // deep copy of head
//         ListNode* temp = head;
//         ListNode* tempC = c;
//         while(temp) {
//             ListNode* node = new ListNode(temp->val);
//             tempC->next = node;
//             temp = temp->next;
//             tempC = tempC->next;
//         }
//         c = c->next;

//         // now reverse the c wali ll
//         c = reverseList(c);

//         // checking if the reversed list is same as the original one :
//         ListNode* a = head;
//         ListNode* b = c;
//         while(a) {
//             if(a->val != b->val) return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
//     }
// };

// ** Method 2 : ( tc - O(N) , sc - O(1) )
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {     // O(N) - tc
//         ListNode *prev = NULL, *curr = head, *Next = head;
//         while(curr) {
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         // if the first half and second half are reverse of each other than it is palindrome
//         ListNode* slow = head;
//         ListNode* fast = head;
//         // finding the "left middle" 
//         while(fast->next!=NULL && fast->next->next!=NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // slow is at the left middle
//         ListNode* newHead = reverseList(slow->next);

//         // ab traverse kro and check in both the parts
//         ListNode* a = head;
//         ListNode* b = newHead;
//         while(b) {
//             if(a->val != b->val) return false;
//             a = a->next;
//             b = b->next;
//         }

//         return true;
//     }
// }; 



// ** Leetcode 92 - Reverse Linked List

// ** Leetcode 143 - Reorder List

