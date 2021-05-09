#include<bits/stdc++.h>
using namespace std;

class comp{
public:
    bool operator()(char a,char b){
        return a>b;
    }
};

void disp(map<int,char> &i){
    for(auto p: i){
        cout<<p.first<<" : "<<p.second;
        cout<<"\n";
    }
}
void disp1(map<char,int,comp> &j){
    for(auto p: j){
        cout<<p.first<<" : "<<p.second;
        cout<<"\n";
    }
}
void disp2(multimap<char,int> &j){
    cout<<"\nMultimaps\n";
    for(auto p: j){
        cout<<p.first<<" : "<<p.second;
        cout<<"\n";
    }
}

int main(){
    map<int, char> mp;
    mp[2] = 'c';
    mp[1]  = 'u';
    mp[1] = 'o';
    mp[9] = 'h';
    mp[1] = 'p' ;//Updation(Overwrites the key value 1)
    mp.insert({5,'l'});
    cout<<mp[1]<<endl;
    cout<<mp.size()<<endl;
    mp.insert(make_pair(1,'g')); //This is not updation, since the key is already present this line is ignores by the compiler 
    //Inserting in a certain position
    auto  it  = mp.begin();
    ++it;
    ++it;
    mp.insert(it,{4,'j'});
    disp(mp);
    (mp.find(11) != mp.end())?cout<<"Found\n":cout<<"Not Found\n";
    //In descending order
    map<char,int,comp> mp2;
    mp2.insert({'j',1});
    mp2.insert({'a',8});
    disp1(mp2);

    //Multimaps in C++ STL
    multimap<char ,int> mmp;
    mmp.insert({'e',9});
    mmp.insert({'j',8});
    mmp.insert({'j',3});
    mmp.insert({'j',11});
    mmp.insert({'l',6});
    mmp.insert({'x',1});
    disp2(mmp);
    //Equal_range generic algorithm in a multimap returns iterator pair of first and last occurence of a particular element
    auto res = mmp.equal_range('j');
    cout<<"The values of the key j is displayed below\n";
    
    for(auto it=res.first;it!=res.second;it++){
        cout<<(*it).second<<" ";
    }
    cout<<"\n";
}