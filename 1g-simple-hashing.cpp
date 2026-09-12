#include <bits/stdc++.h>
// #include<functional>  //for hash use
// #include<string>      //for string use
// #include<unordered_map> //for hashtables use
// #include<unordered_set> //for hashtables use
using namespace std;

void freq1(int arr[], int n)
{

    int tasknum;
    cout << "enter the target finding number: ";
    cin >> tasknum;

    int hash[50] = {0};
    for (int i = 0; i < n; i++)
    { // precomputation...
        if (arr[i] >= 0 && arr[i] < 50)
        {
            hash[arr[i]]++;
        }
    }

    cout << " frequency of occurance of " << tasknum << " is: " << hash[tasknum] << endl;
}
//nothing
void freq2(string s)
{

    char tasknum;
    cout << "enter finding character: ";
    cin >> tasknum;

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    { // precomputation...
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            hash[s[i] - 'a']++;
        }
    }

    cout << " frequency of occurance of " << tasknum << " is: " << hash[tasknum - 97] << endl;
}
void freq3(int n, int arr[])
{
    int k;
    cout << "enter target number :";
    cin >> k;
    map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }
    cout << "frequency of occurance of " << k << " is: " << mapp[k] << endl;
}

int main()
{

    // int num;
    // cout<<"enter size of array of int: ";
    // cin>>num;
    // cout<<"enter array elements:"<<endl;
    // int arr[num];
    // for(int i=0;i<num;i++){
    //     cin>>arr[i];
    // }
    // cout<<"calling function...."<<endl;
    // freq1(arr,num)





    //  string s;
    //  cout<<"enter a sample string: "<<endl;
    //  cin>>s;
    //  cout<<"calling function....."<<endl;
    //  freq2(s);


    //nothing


    // int n;
    // cout<<"enter array size:";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"calling function..."<<endl;
    // freq3(n,arr);

    return 0;
}