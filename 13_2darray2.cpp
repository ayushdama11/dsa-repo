//wap to print the multiplication of two matrices given by the user 
//matrix multipliaction is possible only when = supp 1st matrix order "m X n" and that of second matrix is "p X q" then n==p
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"For 1st matrix "<<endl;
    int m;
    cout<<"enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter cols of 1st matrix : ";
    cin>>n;

    cout<<"For 2nd matrix "<<endl;
    int p;
    cout<<"enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"enter columns of 2nd matrix : ";
    cin>>q;

    if(n==p){ //to hi multiplication hoga 2 matrices kaa
        int a[m][n]; //matrix a
        cout<<"Enter elements of 1st matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q]; //matrix b
        cout<<"Enter elements of 2nd matrix : ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q]; //matrix where multiplication of a and b matrix will be stored
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                //multiply
                res[i][j]=0;
                //res[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + .....
                for(int k=0;k<p;k++){ //we can also write n instead of p because total utni bar multiply hoga jo in dono matrix ke order me common haii matlab n ya p
                    res[i][j] += a[i][k]*b[k][j];    // book me k key jagah pe r likha hai baki sab same haiiii 
                }
            }
        }
        cout<<endl;

        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{   // n!=p
        cout<<"The matrices cannot be multiplied";
    }
}
*/

//wap to print the matrix in wave form
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //wave print
    for(int i=0;i<m;i++){
        if(i%2==0){     //0,2,4... to sidha jo bhi value has sequentially print kar do
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{      //1,3,5... to last se print karna chalu karooo
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
*/

//quests :-
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;

    //wave print
    for(int i=m-1;i>=0;i--){
        if(i%2==0){     //0,2,4... to sidha jo bhi value has sequentially print kar do
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{      //1,3,5... to last se print karna chalu karooo
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
*/

//column wise printing question - wave print 
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //basic column wise print
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    //column wise wave print
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }       
    }
}*/

//wap to print matrix in spriral form - 54 leetcode
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"enter cols of matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //spiral 
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}
*/

//Lec-3 -> 2d vectors = vector of vectors
//we can increase rows , can make variable columns , 
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(10);
    vector<int> v1; //1 2 3 
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; //4 5 
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; //6 7 8 9 10
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    // cout<<v3[4]; //10
    vector< vector<int> > v; //{ {1,2,3}, {4,5}, {6,7,8,9,10} }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1]<<" ";
    cout<<v[0][2]<<" ";
    cout<<v[2][4]<<" ";
    // cout<<v[0][3]; //invalid
}
*/

//2d array into functions
/*
#include<iostream>
using namespace std;
void change(int a[]){ //no need to mention size in 1d array 
    a[0]=9;
}
void change2d(int arr[3][3]){ //size should be given in 2d array 
    arr[0][0]=100;
}

int main()
{
    int a[3]={1,2,3};
    cout<<a[0]<<endl;
    change(a);

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[0][0]<<endl;
    return 0;
}*/

//2d vector into functions
/*
#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector< vector<int> > &v){ //no need to mention size in 2d vcetor
    v[0][1]=100;
}
void length(vector< vector<int> >v){
    cout<<v.size();
}

int main()
{
    vector<int> v1; //1 2 3 
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; //4 5 
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; //6 7 8 9 10
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    // cout<<v3[4]; //10
    vector< vector<int> > v; //{ {1,2,3}, {4,5}, {6,7,8,9,10} }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;
    change2dvector(v);
    cout<<v[0][1]<<endl;
    length(v);

    return 0;
}*/

//2d vector declaration
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v(5); //5 size ka ek vector ban jaega 
    // vector<int> v(5,2); //5 size ka vector banega aur har index me 2 aajaegaa
    // vector< vector<int> >v(3,vector<int> (4)); // 3 rows,4 columns ka ek vector banaya 
    vector< vector<int> >v(3,vector<int> (4,2)); //har block me 2 aega - 2 2 2 2
    cout<<v.size()<<endl; //no.of rows =3
    cout<<v[2][2]<<endl;

    //printing 2d vector
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<v[0].size();//total number of columns
    return 0;
}*/

//given an integer 'numRows',generate pascal's triangel. -Leetcode 118
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=5;
    vector< vector<int> > v;

    //khali vector banaya
    for(int i=1;i<=5;i++){
        vector<int>a(i);
        v.push_back(a);
    }

    //generate
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                v[i][j]=1;
            else
                v[i][j]=v[i-1][j] + v[i-1][j-1];
        }
    }

    //print
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
*/

//leetcode-119 : pascal triangle 2
/*
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<std::vector<int>> v(rowIndex + 1, std::vector<int>(rowIndex + 1, 0));

        for (int i = 0; i <= rowIndex; i++) {
            v[i][0] = v[i][i] = 1;
            for (int j = 1; j < i; j++) {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }

        std::vector<int> result;
        for (int i = 0; i <= rowIndex; i++) {
            result.push_back(v[rowIndex][i]);
        }

        return result;
    }
};*/

//leetcode 861 -score after flipping matrix 
// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int rows=grid.size();
//         int cols=grid[0].size();
//         //making the first column as 1
//         for(int i=0;i<rows;i++){
//             if(grid[i][0]==0){ //flip
//                 for(int j=0;j<cols;j++){
//                     if(grid[i][j]==0) grid[i][j]=1;
//                     else grid[i][j]=0;
//                 }
//             }
//         }

//         //flip the columns where noz>noo
//         for(int j=0;j<cols;j++){
//             int noz=0;
//             int noo=0;
//             for(int i=0;i<rows;i++){
//                 if(grid[i][j]==0) noz++;
//                 else noo++;
//             }
//             if(noz>noo){ //flip
//                 for(int i=0;i<rows;i++){
//                     if(grid[i][j]==0) grid[i][j]=1;
//                     else grid[i][j]=0;
//                 }
//             }
//         }

//         //now we have largest matrix -> now find sum of binary no.s 'row wise'
//         int sum=0;
//         for(int i=0;i<rows;i++){
//             int x=1;
//             for(int j=cols-1;j>=0;j--){
//                 sum+=grid[i][j]*x;
//                 x*=2;
//             }
//         }
//         return sum;

//     }
// };


// leetcode 240 - search a 2d marix 2
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int rows=matrix.size();
//         int cols=matrix[0].size();
//         int i=0;
//         int j=cols-1;
//         while(i<=rows-1 && j>=0){
//             if(matrix[i][j]==target) return true;
//             else if(matrix[i][j]>target) j--; //go left
//             else i++; //go down
//         }
//         return false;
//     }
// };


// ** Leetcode 59 - Spiral Matrix II

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         // arr me n rows aur n columns hoge 
//         vector< vector<int> > arr(n,vector<int> (n));
//         int minr = 0;
//         int maxr = n-1;
//         int minc = 0;
//         int maxc = n-1;
//         int count = 1;
//         while(minr<=maxr && minc<=maxc) {
//             // right
//             for(int j=minc; j<=maxr; j++) {
//                 arr[minr][j] = count++; // pehle jo count tha wo initalize hoga aur badme ++ hoga
//             }
//             minr++;
//             if(minr>maxr || minc>maxc) break;

//             // down
//             for(int i=minr; i<=maxr; i++) {
//                 arr[i][maxc] = count++;
//             }
//             maxc--;
//             if(minr>maxr || minc>maxc) break;

//             // left
//             for(int j=maxc; j>=minc; j--) {
//                 arr[maxr][j] = count++;
//             }
//             maxr--;
//             if(minr>maxr || minc>maxc) break;

//             // top
//             for(int i=maxr; i>=minr; i--) {
//                 arr[i][minc] = count++;
//             }
//             minc++;
//             if(minr>maxr || minc>maxc) break;
//         }
//         return arr;
//     }
// };