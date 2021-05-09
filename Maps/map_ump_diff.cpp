//Comparision between map and unordered map
    //In map find, insertion takes place in O(logn)
    //In unordered map find, insertion takes place in O(1) constant time
    //Unordered multimap
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;//Used to calculate time
int main(){
    map<double,double> mp;
    unordered_map<double,double> ump;
    for(double i;i<1000000;i++){
        mp.insert({i,i+1});
        ump.insert({i,i+1});
    }

    //We are gonna find the time taken to complete the find function in both map
    //and unordered map

    srand(time(0));
    double r = rand()%1000000; //Random key from 0 to 99999

    //For map
    auto start = high_resolution_clock::now();
    if(mp.find(r)!=mp.end()){
        cout<<"FOund and the value is "<<mp[r]<<endl;
    }
    else{
        cout<<"Not found\n";
    }
    auto end = high_resolution_clock::now();
    auto time = duration_cast<microseconds> (end-start);
    cout<<"The time taken by map is "<<time.count()<<" microseconds"<<endl;

    //For unordered map
    start = high_resolution_clock::now();
    if(ump.find(r)!=ump.end()){
        cout<<"Found and the value is "<<ump[r]<<endl;
    }
    else{
        cout<<"Not found\n";
    }
    end = high_resolution_clock::now();
    time = duration_cast<microseconds> (end-start);
    cout<<"The time taken by unordered map is "<<time.count()<<" microseconds"<<endl;

    //check the output and compare the time taken..It will be fun :))
    return 0;
}