#include <bits/stdc++.h>
using namespace std;

void loop1(){
    int n=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    
}
void loop2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=5;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void loop11(){
    for(int i=0;i<5;i++){
        int st=1;
        if(i%2==0){
            st=1;
        }else{
            st=0;
        }
        for(int j=0;j<i+1;j++){
            cout<<st<<" ";
            st=1-st;
        }
        cout<<endl;
    }
}
void loop12(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        for(int j=i;j<(2*5-i-2);j++){
            cout<<"  ";
        }
        for(int j=i;j>=0;j--){
            cout<<j+1<<" ";
        }
        cout<< endl;
    }
}
void loop13(){
    int tmp=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<tmp<<" ";
            tmp++;
        }
        cout<<endl;
    }
}
void loop14(){
    for(int i=0;i<5;i++){
        char tmp='A';
        for(int j=0;j<i;j++){
            
            cout<<tmp<<" ";
            tmp++;
        }
        cout<<endl;
    }
}
void loop15(){
    for(int i=0;i<5;i++){
        for(char j='A'; j<='A'+(5-i-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void loop17(){
    for(int i=0;i<5;i++){
        for(int j=0;j<(5-i);j++){
            cout<<"  ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch<<" ";
            if(j<breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        cout<<endl;
    }
}
void loop18(){
    char l='A'+4;
    for(int i=0;i<5 ;i++){
        for(char ch=l-i; ch <= l ; ch++ ){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void loop19(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=2*n-2*i-2;j>0;j--){
            cout<<"  "; 
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void loop20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
}
void loop21(int n){//hollow square
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void loop22(int n){//nicee
    for(int i=n;i>0;i--){
        int j=n;
        for(j;j>1;j--){
            if(j>=i){
                cout<<j<<" ";
            }else{
                cout<<i<<" ";
            }
        }
        for(j=1;j<=n;j++){
            if(j<=i){
                cout<<i<<" ";
            }else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<n+1;i++){
        for(int j=n;j>1;j--){
            if(j>=i){
                cout<<j<<" ";
            }else{
                cout<<i<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<i<<" ";
            }else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    //loop1();
    //loop2();
    //loop11();
    //loop12();
    //loop13();
    //loop14();
    //loop15();
    //loop17();
    //loop18();
    //loop19(5);
    //loop20(5);
    //loop21(5);
    loop22(5);
    return 0;
}