//This is used to implement Doubly linked lists in data structures

#include<bits/stdc++.h>
using namespace std;
void disp(list<int> v_disp){
    for(auto it=v_disp.begin();it!=v_disp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> v(10,9);
    v.insert(v.end(),8);
    v.pop_back();
    disp(v);
    cout<<v.size()<<endl;
    list<int> v1;
    for(int i=0;i<7;i++){
        v1.push_back(i);
    }
    disp(v1);
    v1.insert(v1.end(),v.begin(),v.end());
    disp(v1);
    swap(v,v1);
    disp(v1);disp(v);
    return 0;
}
