#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    deque<int> dq{1,5,4};
    for(int i=0;i<7;i++){
        dq.push_front(i);
    }
    for(auto c:dq){
        cout<<c<<" ";
    }
    cout<<endl;
    auto it = dq.cbegin();
    it++;
    cout<<*it<<endl;
    cout<<dq.size()<<endl;
    dq.push_back(4);
    sort(dq.begin(),dq.end());
    for(auto c:dq){
        cout<<c<<" ";
    }
    cout<<endl;
    reverse(dq.begin(),dq.end());
    for(auto c:dq){
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<*(adjacent_find(dq.begin(),dq.end()))<<endl;
    deque<char> ds;
    cout<<ds.size()<<endl;
    while(ds.size()!=5){
        ds.push_back('v');
    }
    for(auto c: ds){
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;

}
