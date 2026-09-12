#include<bits/stdc++.h>
using namespace std;

void learnpairs(){
    pair<int,int> p={1,3};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.second.first<<endl;
    cout<<p1.first<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;
}

int main(){
    
    learnpairs();
    
    return 0;
}