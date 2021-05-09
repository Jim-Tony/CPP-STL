#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
struct A
{
    bool operator() (int i,int j){
        return (i<j);
        }
    /* data */
}myobj;

int main(){
    vector<string> v{"Hello Tony","How are you"};
    for(auto i:v){
        cout<<i<<endl;
    }
    int arr[] = {1,4,5,7,6,4,3,2,1,8};
    for(int k:arr){
        cout<<k<<" ";
    }
    cout<<endl;
    vector<int> s;
    for(int i=0;i<5;i++){
        s.push_back(i);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
    vector<int> v1{1,4,5,6,2,1,8,7,6};
    auto it = max_element(v1.begin(),v1.end(),myobj);
    cout<<endl<<*it;
    auto it1 = min_element(v1.begin(),v1.end(),myobj);
    cout<<endl<<*it1;
    cout<<endl;
}