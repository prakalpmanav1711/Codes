#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin>>i;
    unordered_map<int,int> temp;
    string te = "codeforces";
    for(int i = 0; i<te.size(); i++){
        temp[te[i]]++;
    }
    while(i--){
        char a;
        cin>>a;
        if(temp[a]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}