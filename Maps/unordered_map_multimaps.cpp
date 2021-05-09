//Unordered maps and unordered multimaps

#include<bits/stdc++.h>
using namespace std;
void disp(unordered_multimap<int,char> &mp){
    for(auto [key,val]:mp){ //this bindings are available only in c++17 and above
        cout<<key<<":"<<val<<endl;
    }
    cout<<"\n";
}
int main(){
    unordered_map<int,int> ump;
    vector<int> v{9,1,2,3,3,6,1,7,10,1};
    ump.insert({11,4});
    for(auto i:v){
        ump[i]++;
    }
    ump.erase(9);
    cout<<ump[9]<<" The size is "<<ump.size()<<endl;
    
    unordered_multimap<int,char> mp2;
    //Don't use [] to insert in multimaps
    mp2.insert({5,'e'});
    mp2.insert({4,'t'});
    mp2.insert({5,'h'});
    mp2.insert({1,'u'});


    disp(mp2);
}