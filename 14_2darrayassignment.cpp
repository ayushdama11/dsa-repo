//week-2 
//print ele of diag in sq matrix
/*
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter number of elements: "<<endl;
    cin>>m;
    int arr[m][m]; //square matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print ele of diag in sq matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j==m-1)){         //i+j matlab jo last column rahega uske liee
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}*/

//wap to rotate matrix by 90 degree anti-clockwise
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter number of cols : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //rotating anti-clockwise
    for(int k=0;k<m;k++){
        int i=0;
        int j=m-1;
        while(i<j){
            swap(a[i][k],a[j][k]);
            i++;
            j--;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}*/

//wave form question
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter number of cols : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
    }

}