//This Container is mainly used for Single Linked List in Data Structure
#include<bits/stdc++.h>
using namespace std;
void disp(const forward_list<int> fll){
    for(auto i:fll){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    forward_list<int> fl{4,1,2,3,9,8};
    fl.push_front(5);
    cout<<"The linked lists elements are ";
    disp(fl);
    fl.insert_after(begin(fl),11);
    fl.pop_front();
    //Inserting and Sorting  in Forward Lists
    fl.sort();
    cout<<"After Sorting "<<endl;
    disp(fl);
    // cout<<"The size is "<<<<endl;
    cout<<"after assigning new values\n ";
    fl.assign(5,10);
    disp(fl);

}