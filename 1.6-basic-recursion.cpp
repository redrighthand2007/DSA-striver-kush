#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void onetonterms(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    onetonterms(i+1,n);
}
void onetonterms2(int i,int n){
    if(i<1){
        return;
    }
    onetonterms2(i-1,n);
    cout<<i<<" ";
}
void sumoffirstnterms(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    } 
    sumoffirstnterms(i-1,sum+i);
}
int sumoffirstnterrms2(int n){
    if(n==0){
        return 0;
    }
    return n+ sumoffirstnterrms2(n-1);
}
int factorialofn(int n){
    if(n==1){
        return 1;
    }
    return n*factorialofn(n-1);
}
void reversearray2pointer(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int tmp=arr[l];
    arr[l]=arr[r];
    arr[r]=tmp;
    reversearray2pointer(arr,l+1,r-1);

}
void reversearray1pointer(int arr[], int i, int n){
    if(i >= n/2){
        return;
    }

    int tmp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = tmp;

    reversearray1pointer(arr, i+1, n);
}
bool stringpalindrome(string h,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(h[i]!=h[n-i-1]){
        return false;
    }
    return stringpalindrome(h,i+1,n);
}
int printfibonacci(int n){
    if(n<=1){
        return n;
    }
    int first=printfibonacci(n-1);
    int sec=printfibonacci(n-2);
    return first+sec;
}
int main(){

    // cout<<" all exmaples are types of recursion using in different scenarios."<<endl<<endl;

    // onetonterms(1,3);//normal recursion.
    // cout<<endl;
    
    // onetonterms2(3,3);//recursion -> backtracking.
    // cout<<endl;
    
    // sumoffirstnterms(5,0);               // parameterized method(sum in in parameter)
    // cout<<endl;
    
    // int ans=sumoffirstnterrms2(5);      //functional method
    // cout<< ans<<endl;

    // int c=factorialofn(5);
    // cout<<c<<endl;

    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int l=0;
    // int r=n-1;
    // reversearray2pointer(arr,l,r);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // reversearray1pointer(arr,l,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    
    // string h="madam";
    // int f=h.size();
    // bool aaa=stringpalindrome(h,0,f);
    // cout<<aaa;


    // int n;
    // cout<<"enter targeted index of series: ";
    // cin>>n;
    // int fb=printfibonacci(n);
    // cout<<fb<<endl;

    return 0;
}