#include<bits/stdc++.h>
using namespace std;
void countdigits(int n){
    int cnt=0;
    while(n>0){
        n%10;
        n/=10;
        cnt++;
    }
    cout<< cnt<<endl;
}
int reversenum(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
void palindrome(int n){
    if((reversenum(n) == n)){
        cout<<"its palindrome ! "<<endl;
    }else cout<<"not a palindrome"<<endl;
}
void armstrong(int n){
    int k=n;
    int sum=0;
    while(n>0){
        sum+=(n%10)^3;
        n/=10;
    }
    if(k==sum){
        cout<<"its Armstrong ! "<<endl;
    }else{
        cout<<"not a Armstrong "<<endl;
    }
}
void printdivisors(int n){
    vector<int> v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i); 
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}
void prime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(n/i !=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"prime"<<endl;
    }else cout<<" non-prime"<<endl;
}
void gcdOrhcf(int n,int m){
    int l=min(n,m);
    int max;
    for(int i=l;i>=1;i--){
        if(n%i==0 && m%i==0){
            max=i;
            break;
        }
    }
    cout<<max;
}

int main(){
    cout<<endl;

    //countdigits(7789);
    //int x=reversenum(7789);
    //palindrome(1331);
    //armstrong(371);
    //printdivisors(36);
    //prime(46);
    //gcdOrhcf(9,12);
    
    return 0;
}