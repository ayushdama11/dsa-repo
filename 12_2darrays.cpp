//2d array is also known as matrix => Note:-(rows,column)
//int brr[2][3]
//while initializating 2d array it is neccesary to mention the second dimension , whereas the first dimension is optional

//Initialization of 2d array :-
/*
#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]; //3X3 type of 2d-array is created -> total 9 memory is allocated!!
    // //rows -> 3 -> index 0-2
    // //colums -> 3 -> index 0-2
    // cout<<arr[0][0]; //output is garbage value
    // arr[0][0]=4;
    // cout<<arr[0][0]; //4

    // int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<arr[0][0];
    // cout<<arr[0][1];
    // //2d arrays are also array of arrays

    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // cout<<arr[0][0];

    // //we can leave first dimension but not second dimension
    // int arr[][3]={1,2,3,4,5,6};
    // cout<<arr[0][0];

    return 0;
}*/

//Traversal through 2d array :- *we use nested loops* 
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //print 1st row =
    // for(int i=0;i<=2;i++){
    //     cout<<arr[0][i]<<" ";
    // }

    //print whole matrix =
    for(int i=0;i<=2;i++){ //i is row - m-1
        for(int j=0;j<=2;j++){ //j is colummn -n-1
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//Taking user input for matrix
/*
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter number of rows :- ";
    cin>>m;
    int n;
    cout<<"enter number of columns :- ";
    cin>>n;
    int arr[m][n]; //matrix-2d
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//write a program to store roll number and marks obtained by 4 students side by side in a matrix
/*
#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=1;i++){
        for(int j=0;j<=3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//wap to find the largest element of given 2d array of integers :-
/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter number of rows :- ";
    cin>>m;
    int n;
    cout<<"enter number of columns :- ";
    cin>>n;
    int arr[m][n]; //matrix
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    //max
    int max = INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<"max is :- "<<max;
    return 0;
}*/

//wap to print sum of all the elements of 2d array
/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter number of rows :- ";
    cin>>m;
    int n;
    cout<<"enter number of columns :- ";
    cin>>n;
    int arr[m][n]; //matrix
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int sum =0;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    return 0;
}*/

//wap to add two matrices if possible otherwise print not possible
//for adding 2 matrices -> order of both matrix should be same 
/*
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{7,8,9},{10,11,12}};
    int res[2][3]; //resultant

    //method-1
    // for(int i=0;i<2;i++){    //because of number of rows 
    //     for(int j=0;j<3;j++){    //because of number of columns
    //         res[i][j]=a[i][j]+b[i][j];
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //method-2
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[i][j]+b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //

    // // if b key andar a ko add karna haiii 
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         b[i][j]+=a[i][j];
    //     }
    // }

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}*/

//wap to print the transpose of the matrix entered by the user and store it in a new matrix
//in transpose total number of rows become column and vice versa
/*
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter number of rows :- ";
    cin>>m;
    int n;
    cout<<"enter number of columns :- ";
    cin>>n;
    int arr[m][n]; //matrix
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //printing transpose
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //store the transpose
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//wap to change the given matrix with its transpose -Leetcode 867
//square matrix = number of rows = number of columns 

//you are given a matrix / 2d-array of size (n x n).transform this matrix into its transpose
/*
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter number of rows :- ";
    cin>>m;
    int arr[m][m]; //matrix
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose in the same matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
        //swapping of i,j and j,i
            if(i<j){    //so that there is less traversing -> do these for elements above the diagonal elements like [0][0],[1][1],...
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//wap to rotate the square matrix by 90 degrees clockwise = leetcode 48
/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){  //taki ham pure matrix me changes na kare 
                //swap i,j and j,i
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //reverse each row
        for(int k=0;k<n;k++){ //traversing each row
            int i=0;
            int j=n-1;
            while(i<=j){ //swapping k,i and k,j
                int temp = matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }
        return;
    }
};
*/


