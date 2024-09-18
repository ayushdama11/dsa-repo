// normal sorting- inbuilt sorting
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i=0; i<5; i++){
//         cin>>v[i];
//     }
//     sort(v.begin(), v.end()); // O(nlogn)
//     // reverse(v.begin(), v.end());
//     for(int i=0; i<5; i++){
//         cout<<v[i]<<" ";  
//     }
// }


//** BUBBLE SORTING */ 

//** observations */
// 1. in each pass the nth max element goes to its right position
// 2. if there are 'n' elements then we require atmost n-1 passes to sort the array

//** algorithm */
// in each pass swap 2 adjacent elements if arr[i]>arr[i+1] 
// iteration in each pass also reduces

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[6] = {5,4,6,3,2,1};
//     int n=6;

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//** bubble sort */

    // for(int i=0; i<n-1; i++){  //n-1 passes
    //     //traverse
    //     for(int j=0; j<n-1-i; j++){
    //         if(arr[j]>arr[j+1]){    //swap
    //             // int temp= arr[j];
    //             // arr[j]= arr[j+1];
    //             // arr[j+1]= temp;

    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    // cout<<endl;

//** bubble sort optimized */

//     for(int i=0; i<n-1; i++){  //n-1 passes
//         //traverse
//         bool flag= true; //sorted
//         for(int j=0; j<n-1-i; j++){
//             if(arr[j]>arr[j+1]){    //swap
//                 swap(arr[j], arr[j+1]);
//                 flag= false;
//             }
//         }
//         if(flag==true){ //swap didn't happened
//             break;
//         }
//     }
//     cout<<endl;

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }


//** Time complexity of normal bubble sort code = O(n^2) */  - for all worst, best and average case
//** Space complexity of normal bubble sort code = O(1) */


//** Time complexity of optimized bubble sort code = */
// best case :- O(n) 
// avg case :- O(n^2)
// worst case :- O(n^2)

//** Space complexity of optimized bubble sort code = O(1) */

// bubble sort is stable sorting algorithm



//** Sort a string in decreasing order of values associated after removal of values smaller than x */ 
// example -> string s = "AZYZXBDJKX"
// output will be "ZYZXX" - fir decreasing order me sort karna hai - ZZYXX

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="AZYZXBDJKX";
//     string str;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]>='X'){
//             str.push_back(s[i]);
//         }
//     }
//     sort(str.begin(),str.end());
//     cout<<str;
// }


//** Push zeroes to end while maintaining the relative order of the other elements. */ ****
// example arr= {5,0,1,2,0,0,4,0,3}
// arr= {5,1,2,4,3,0,0,0,0}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,0,1,2,0,0,4,0,3};
    int n=9;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

//** bubble sort */

    for(int i=0; i<n-1; i++){  //n-1 passes
        //traverse
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){    //swap
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// bubble sort algorithm is a swapping algorithm ***
