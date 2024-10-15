//passing array to functions :-
/*
#include<iostream>
using namespace std;
void display(int a[],int size){    //we can also write "int* a"
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
//we cannot calculate size of an array in function by using formula size=sizeof(arr)/sizeof(arr[0]) !!
void change(int b[],int size){
    b[0]=100; //it is not new array , we actually give address of array in the function in which array is given
}
int main()
{
    int arr[5]={1,4,2,7,4};
    //accessing the element of the array in another function 
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size); //so actually address of arr is been sent ; any changing in array in function will change the array actually
    return 0;
}
*/

//Arrays and Pointers :- int* ptr = arr , int* ptr = &arr[0]
//NOTE :- storing address of array in pointer means that we are storing the address of first element of the array in the pointer 
//giving address of first element of array totally means that we gave whole array to the pointer
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,6,1,7};
    int* ptr=arr; //giving address
    cout<<ptr<<endl; //will give address of 0th element of an array
    cout<<&arr[0]<<endl;

    // //Method-1:-
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" ";    //even i[ptr] , i[arr] is valid
    // }
    // cout<<endl;

    //Method-2:-
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr; //ptr is pointing to 1st element again

    //Arithmetics :-
    *ptr=8; //ptr[0]=8
    ptr++; //ptr is pointing to 2nd element
    *ptr=9;
    ptr--; //ptr is pointing to 1st element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}
*/

//Sorting the Vector :- preferably ascending order
/*
#include<iostream>
#include<vector>
#include<algorithm> //library in which "sort" is present 
using namespace std;

void inp(int n,vector<int>& v){
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v[i]=element;
    }
}
void oup(int n,vector<int>& v){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"size of vector :- ";
    cin>>n;
    vector<int>v(n);

    inp(n,v);
    oup(n,v);

    cout<<endl;
    sort(v.begin(),v.end()); //function in cpp library algorithm 
    oup(n,v);
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
#include<algorithm> //library in which "sort" is present 
using namespace std;

void inp(int n,vector<int>& v){
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
}
void oup(int n,vector<int>& v){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"size of vector :- ";
    cin>>n;
    vector<int>v;

    inp(n,v);
    oup(n,v);

    cout<<endl;
    sort(v.begin(),v.end()); //function in cpp library algorithm 
    oup(n,v);
    return 0;
}
*/

//Sort the arrays of 0's and 1's :-
//eg:- 0 1 0 0 1 1 0 1
//Method-1 :- Two pass method :- used when multiple traversing through array is allowed
/*
#include<iostream>
#include<vector>
using namespace std;
void inp(int i,int n,vector<int>& v){
    for(int i=0;i<=n-1;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
}
void oup(int i , int n,vector<int>& v){
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
}
void sort(vector<int>& v){
    int n=v.size();
    int noo =0; //Number of one's in vector
    int noz =0; //Number of zeros "   "
    //incrementation of variables
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    //filling elements
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i] =1;
    } 
}
int main()
{
    int n;
    cout<<"size of vector :- ";
    cin>>n;
    vector<int>v;
    inp(0,n,v);
    oup(0,n,v);
    cout<<endl;
    // sort(v.begin(),v.end());
    sort(v); 
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
*/

//Method-2 :- using Two-Pointers
//use this method when multiple traversing is not allowed !!
/*
#include<iostream>
#include<vector>
using namespace std;
void inp(int i,int n,vector<int>& v){
    for(int i=0;i<=n-1;i++){
        v.push_back(i);
        cin>>v[i];
    }
}
void oup(int i , int n,vector<int>& v){
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
}
void sort(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"size of vector :- ";
    cin>>n;
    vector<int>v(n);
    inp(0,n,v);
    oup(0,n,v);
    cout<<endl;
    // sort(v.begin(),v.end());
    sort(v); 
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
*/

//Sort the array of 0's,1's and 2's :- solved using "DUTCH FLAG ALGORITHM"
//-Leetcode => Sort Colors => P-75
//M1=
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int noz=0;
        int noo=0;
        int no2=0;
        //incrementation:-
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else no2++;
        }
        //filling elements :-
        for(int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i]=1;
            else nums[i]=2;
        }
        return;
    }
};*/

//M2=Dutch flag algorithm :- when multiple traversing not allowed 
/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //one pass solution
        int lo=0;
        int mid=0;
        int hi=nums.size()-1;
        while(mid<=hi){
            if(nums[mid]==2){
                //swap 'mid' with 'hi'
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi]=temp;
                hi--;
            }
            else if(nums[mid]==0){
                //swap mid with lo
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo]=temp;
                lo++;
                mid++;
            }
            else mid++; //matlab 1 hoga to mid badte jaegaa
        }
        return;
    }
};*/

//Merge the Sorted Array :- Leetcode-88 :- ascending order 
/*
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(m+n); //res=resultant aur uskaa size m+n ke barabar hogaa 
    int i=0 ; //arr1
    int j=0 ; //arr2
    int k=0 ; //arr3

    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];  //because in ascending order 
            i++;          
        }
        else{ // arr1[i]>arr2[j]
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    
    //for remaining elements
    if(i==n){   //arr1 ke saare elements utha chuka huu
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){ //arr2 ke saare elements utha chuka hu
        while(i<=n-1){
            res[k]=arr1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main()
{
    //int arr1[4]={1,4,5,8};
    vector<int> arr1;
    cout<<"Enter elements of sorted arr1"<<endl;
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        arr1.push_back(n);
    }
    for(int i=0;i<4;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    vector<int> arr2;
    cout<<"Enter elements of sorted arr2"<<endl;
    for(int i=0;i<6;i++){
        int m;
        cin>>m;
        arr2.push_back(m);
    }
    for(int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl;

    vector<int> v=merge(arr1,arr2);
    //int arr2[6]={2,3,6,7,10,12};
    //int arr3[10];

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}*/


//Find the next permutations of Array :- Leetcode-31
/*
class Solution {
public:
    // void reverse(vector<int>& nums, int i, int j){
    //     while(i<j){
    //         int temp=nums[i];
    //         nums[i]=nums[j];
    //         nums[j]=temp;
    //         i++;
    //         j--;
    //     }
    //     return;
    // }
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        //(1). finding pivot index => index where there is a gradual change [minima , maxima ]
        int idx = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){ //if our array is already the greatest 
            // reverse(nums,0,n-1);
            reverse(nums.begin(),nums.end());
            return;
        }
        //(2). Sorting/revrsing after pivot
        reverse(nums.begin()+idx+1,nums.end());

        //(3). Finding the just greater element than idx 
        int j = -1;
        for(int i = idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j = i;
                break;
            }
        }

        //(4). Swapping idx and j
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;
    }
};
*/

//Trapping Rain Water :- (Leetcode-42)
/*
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        //prev greatest element array
        int prev[n];
        prev[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++){
            prev[i]=max;     
            if(max<height[i])max= height[i];
        }

        //next greatest ele array
        int next[n];
        next[n-1]=-1;
        max=height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i]=max;
            if(max<height[i]) max=height[i];
        }
        
        //minimum array
        int crr[n];
        for(int i=0;i<n;i++){
            crr[i]=min(prev[i],next[i]);
        }

        //calculating water
        int water=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<crr[i]){
                water += (crr[i]-height[i]);
            }
        }
        return water;
    }
};
*/

//wap to find the smallest missing element in the sorted array that only contains posiitive numbers
//eg:- 1,2,4,6,7 => * smallest missing number = 3 *
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int ele;
//     cout<<"size of the array is :- "<<size;
//     int arr[size];
//     for (int i=0;i<size;i++){
//         cin>>ele;
//         arr[i]=ele;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<size-1;i++){
//         if (arr[i]!=arr[i+1]-1){
//             cout<<arr[i+1]-1<<" ";
//         }
//     }
// }

//FIND THE TOTAL NUMBER OF PAIRS IN AN ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE X :-
/*
#include<iostream>
using namespace std;
int main()
{
    int array[]={3,4,6,7,1};
    int targetsum=7;
    int size=5;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}*/

//FIND THE TOTAL NUMBER OF TRIPLETS IN AN ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE X :-
/*
#include<iostream>
using namespace std;
int main()
{
    int array[6];
    int triplets=0;
    for(int idx=0;idx<6;idx++){
        cin>>array[idx];
    }
    
    int targetsum=5;
    int size=6;
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    return 0;
}*/


// find the factorial of a large number 
#include<iostream>
#include<vector>
using namespace std;

int go(vector<int>& a, int val, int size){
    int carry=0;
    for(int i=0; i<size; i++){
        int product= a[i]*val+carry;
        a[i]=product%10;
        carry=product/10;
    }

    while(carry){
        a[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(500,0);
    int size=1;

    a[0]=1;

    for(int i=2; i<=n; i++){
        size= go(a,i,size);
    }

    for(int i=size-1; i>=0; i--){
        cout<<a[i];
    }
}