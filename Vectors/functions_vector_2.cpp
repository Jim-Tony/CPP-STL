#include<bits/stdc++.h>
//#include<vector>
using namespace std;
void display(vector<int> &v1){
    for(int i = 0;i<8;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,6,5,4,9,2,7,8};
    vector<int> v(arr,arr+8);
    display(v);
    sort(v.begin(),v.end());
    display(v);
    //binary-search
    if(binary_search(v.begin(),v.end(),3)) cout<<"found\n";
    else cout<<"Not Found\n";
    //Upper-bound & Lower bound
    int arr1[] = {1,1,5,4,2,2,1,8};
    vector<int> ve(arr1,arr1+8);
    sort(ve.begin(),ve.end());
    display(ve);
    vector<int>::iterator it1 = upper_bound(ve.begin(),ve.end(),2);
    vector<int>::iterator it2 = lower_bound(ve.begin(),ve.end(),2);
    cout<<"Upper bound of 2 is "<<(it1-v.begin())%10<<" Lower bound is "<<(it2-v.begin())%10<<endl;
    return 0;
}