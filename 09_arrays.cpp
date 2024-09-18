//Array is data structure which stores a collection of homogeneous items. but all items should be of same datatype
//Array is stored in contigious memory.
//index = location of every element in array

//syntax for array declaration = datatype arrayname[array-size]
//eg:- int arr[5]
//int array[]={1,2,3,4,5}

/* 
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl; //since 1 int = 4 bytes, so 4 int contains 4*4=16 bytes  
    cout<<sizeof(array)/sizeof(array[0])<<endl; //for finding how many elements are there in an array or we can say to find the size of array
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int arr[4]; //it stores garbage value , so always initialise your array
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    return 0;
}*/

//Traversing through array :- using loops to access the value of arrays 
/*
#include<iostream>
using namespace std;
int main()
{
    to print the value at index using loops :-

    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    FOR-LOOP:-
    for(int idx=0 ; idx<size ;idx++){       //idx=index
        cout<<array[idx]<<endl;
    }

    FOR-EACH LOOP:-  //it will go to last then exit loop , we cannot stop in between 
    for(int elmt:array){
        cout<<elmt<<endl;
    }

    WHILE LOOP:-
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }
    return 0;
} 
*/

//TO TAKE ARRAY INPUT FROM USER:-

#include<iostream>
using namespace std;
int main()
{
    char vowels[5];
    // USING FOR LOOP:-
    // for(int idx=0;idx<5;idx++){
    //     cin>>vowels[idx];
    // }
    // for(int idx=0;idx<5;idx++){
    //     cout<<vowels[idx]<<" ";
    // }

    // USING FOR-EACH LOOP:-
    for(char &ele:vowels){ //so for taking input for array using FOR-EACH loop we have to use &percent operator 
        cin>>ele;
    }
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }
    return 0;
} 

//Calculate the sum of all the elements in the given array :-
/*include<iostream>
using namespace std;
int main()
{
    int array[]={3,4,10,11};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum<<endl;
    return 0;
}*/

//Find the maximum value out of all the elements in the array :-
/*
#include<iostream>
using namespace std;
int main()
{
    int array[]={3,7,18,9,11};
    int max=array[0]; //initialize array with first element of an array 
    for(int i=1;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;

    return 0;
}*/

//LINEAR SEARCH :- Search if a given element is present in the array or not . If it is not present in the array then return -1 else return the index
/*
#include<iostream>
using namespace std;
int main()
{
    int array[]={3,9,18,11,7};
    int key=9;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
            break; //so whenever this condition becomes true , it will break loop and will not traverse through whole array 
        }
    }
    cout<<ans<<endl; //we will get index at which that key is present in the array
    return 0;
}*/

//print the second largest element of the array :-
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter size of the array";
//     cin>>n;
//     int arr[n];
//     //input
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     //int max=arr[0];
//     int max=INT_MIN; 
//     //INT_MIN is a macro that specifies that an integer variable cannot store any value below this limit. It represents the minimum value or the upper limit of the integer data type.
//     //INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. It represents the maximum value of the upper limit of the integer data type in C/C++. 
//     for(int i=0;i<=n;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     int smax=INT_MIN; //second max
//     for(int i=0;i<=n;i++){
//         if(arr[i]!=max && smax<arr[i]) smax=arr[i];
//     }
//     cout<<max<<endl;
//     cout<<smax;
//     return 0;
// }