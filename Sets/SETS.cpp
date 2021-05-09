/*Sets STL */ 
#include<bits/stdc++.h>
using namespace std;
class comp{
    public:
        bool operator()(const pair<int,int> &a,const pair<int,int> &b){
            return (a.second<b.second);
        }
};
template <class T>
void disp(set<T> &s){
    for(auto c:s){
        cout<<c<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    set<int> se;
    se.insert(2);
    se.insert(4);
    se.insert(5);
    se.insert(1);
    se.insert(6);
    se.insert(9);
    disp(se);
    cout<<"The size is "<<se.size()<<endl;
    se.erase(1);    
    // ordering the set values as ascending order of the second value in a pair
    set<pair<int,int>,comp> sp;
    sp.insert({1,5});
    sp.insert({0,4});
    sp.insert({3,9});
    sp.insert({6,2});
    sp.insert({4,8});
    //Hence the values are sorted according to the second values of the pairs
    for(auto d:sp){
        cout<<d.first<<" "<<d.second<<endl;
    }
    cout<<"\n";
    return 0;
}
