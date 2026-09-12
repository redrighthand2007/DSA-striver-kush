#include<bits/stdc++.h>
using namespace std;

void secondlargest(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //maintain two variables for largest and seclargest.
    int larg=INT_MIN;
    int seclarg=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>larg){
            seclarg=larg;
            larg=arr[i];
        }else if (arr[i]<larg && arr[i]>seclarg){
            seclarg=arr[i];
        }
    }
    cout<<"second largest is: "<<seclarg<<endl;
}
void secondsmallest(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small=INT_MAX;
    int ssmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }else if(arr[i]>small && arr[i]<ssmall){
            ssmall=arr[i];
        }
    }
    cout<<"second smallest is: "<<ssmall<<endl;
}
int main(){

    secondlargest();
    secondsmallest();
    
    return 0;
}