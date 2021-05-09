/*Unordered Sets ,Multisets and Unordered Multisets STL */ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> us{2,3,4,5,1,9,77};
    auto it = us.find(17);
    if(it!=us.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"Not Found\n";
    }
    us.insert(99);
    us.insert(99);
    for(auto i: us){
        cout<<i<<endl;
    }
    cout<<"The size is "<<us.size()<<endl;
    //Multiset  -> Allow duplicate elements in order
    //Unordered Multisets - > Allow duplicate elements not in order
    multiset<char> mc;
    mc.insert('h');
    auto it1 = mc.find('h');
    cout<<(*it1)<<endl;


    unordered_multiset<string> ums;
    ums.insert({"hello","morning","hello"});
    cout<<"Unordered Multiset\n";
    for(auto j: ums){
        cout<<j<<endl;
    }
    cout<<"The size is "<<ums.size()<<endl;
    return 0;

}