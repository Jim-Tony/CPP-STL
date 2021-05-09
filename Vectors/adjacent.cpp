#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> v_disp){
    for(auto it=v_disp.begin();it!=v_disp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
bool comp(int a,int b){
    return (a==b);
}
int main(int argc, const char** argv) {
    vector<int> v1;
    int y;
    for(int i=0;i<5;i++){
        cin>>y;
        v1.push_back(y);
    }
    disp(v1);
    //adjacent_difference
    vector<int> v2(10);
    auto it1=v2.begin();
    adjacent_difference(v1.begin(),v1.end(),it1);
    disp(v2);
    //adjacent_find
    cout<<*adjacent_find(v1.begin(),v1.end(),comp)<<endl;
    return 0;
}