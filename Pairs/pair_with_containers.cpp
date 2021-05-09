#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
template <class T>
void disp(const vector<T> &v){
    for(auto e : v){
        cout<<"("<<e.first<<","<<"("<<e.second.first<<","<<e.second.second<<")"<<")"<<endl;
    }
    cout<<endl;
}

void dispvec(const vector<pi> &vp1){
    //This Structured bindings works only on C++17 and above..
    for(auto [c,d]:vp1){
        cout<<"("<<c<<","<<d<<")";
         cout<<endl;
    }
    cout<<endl;
   
}
bool sortbythre(const pair<int,pi> &i,const pair<int,pi> &j){
    return (i.second.second<j.second.second);
}
bool sortcustom(const pi &x,const pi &y){
    if (x.second==y.second) return x.first>y.first;
    return x.second<y.second;
}
int main(int argc, char const *argv[])
{
    // Creating Triplets
   vector<pair<int,pi>> pr;
    pr.push_back({1,{4,5}});
    pr.push_back({4,{1,5}}); 
    pr.push_back({12,{8,3}});
    pr.push_back({6,{3,9}});
    disp(pr);
    // sorting by the third value
    sort(pr.begin(),pr.end(),sortbythre);
    cout<<"After Sorting"<<endl;
    disp(pr);

    // Creating tuples and sorting second values in ascending order,
    // suppose if two values are same then sort them in descending order of the first value
    vector<pi> vp;
    vp.push_back({2,1});
    vp.push_back({3,1});
    vp.push_back({1,2});
    vp.push_back({5,2});
    vp.push_back({7,0});
    cout<<"The vector is\n";
    dispvec(vp);
    cout<<"after sorting in our custom way\n";
    sort(vp.begin(),vp.end(),sortcustom);
    dispvec(vp);

    return 0;
}
