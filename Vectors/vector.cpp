#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i = 0;i<8;i++)
    {
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i = 0;i<v.size();i++)
    {
     cout<<v[i]<<endl;
    }
    cout<<"Hello"<<endl;
    return 0;
}