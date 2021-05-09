#include<iostream>
#include<vector>
using namespace std;
void disp(const vector<int> &copy){
    for(auto it=copy.rbegin();it!=copy.rend();it++){
        cout<<*it<<" ";
        }
    }
int main(){
    vector<int> v1;
    //push_back function
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    //accessing a particular element
    cout<<v1.at(3)<<endl;
    //vector<int>::iterator it;
    disp(v1);
    //pop_back function
    //Copy constructor in vectors::::::
    vector<int> v2(v1);
    v1.pop_back();
    cout<<"After pop back is ";
    disp(v1);
    cout<<endl;
    //Comparision between vectors
    cout<<(v2<v1)<<endl;
    //front() and back() operations

    cout<<endl;
    cout<<v1.front()<<" "<<v1.back()<<endl;
    v2.clear();
    //diff btw size and capacity
    cout<<"v2.size() is "<<v2.size()<<" v2.capacity is "<<v2.capacity()<<endl;
    cout<<"Max size of v1 is "<<v1.max_size()<<endl;
    //at function
    cout<<v1.at(2)<<endl;
    //Accesing random element
    vector<int>::iterator it2 = v1.begin();
    it2 += 3;
    cout<<*it2<<endl;
    return 0;
}    