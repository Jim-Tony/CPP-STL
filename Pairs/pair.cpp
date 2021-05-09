#include<bits/stdc++.h>
using namespace std;

// Use Template so that we can pass vectors with different data types

template<class T>
void dispvec(const vector<T> &v){
    //This Structured bindings works only on C++17 and above..
    for(auto [c,d]:v){
        cout<<"("<<c<<","<<d<<")";
         cout<<endl;
    }
    cout<<endl;
   
}

bool sortsecond(const pair<int,int> &a,const pair<int,int> &b){
    return(a.second<b.second);
}


int main(int argc, char const *argv[])
{
    pair<int,int> p = make_pair(1,2);
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    //Vector of pairs
    vector<pair<int,int>> vc;
    vc.push_back({3,4});
    vc.push_back({2,8});
    vc.push_back({1,3});
    vc.push_back({5,5});
    vc.push_back({3,1});
    vc.push_back({9,4});
    dispvec(vc);
    // sorting the pairs inside the vectors based on the second element
    sort(vc.begin(),vc.end(),sortsecond);
    cout<<"After sorting in a required way\n";
    dispvec(vc);
    //Vetor of pairs(int and strings)
    vector<pair<int,string>> vs;
    vs.push_back({4,"Hi"});
    vs.push_back({2,"Welcome"});
    vs.push_back({1,"to"});
    vs.push_back({3,"coding"});
    vs.push_back({5,"STL"});
    dispvec(vs);
    
    return 0;
}
