#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void disp(vector<int> v_disp){
    for(auto it=v_disp.begin();it!=v_disp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
bool pred(int j){
    return (j%2==1);
}
bool pred2(int k){
    return (k%2==0);
}
int main(){
    int arr[] = {2,3,8,1,5,4,9,7,6};
    vector<int> v(arr,arr+9);
    disp(v);
    //count function
    int f = count(v.begin(),v.end(),8);
    cout<<"The element 8 is present "<<f<<" times\n";
    //count_if function
    int u = count_if(v.begin(),v.end(),pred);
    cout<<"Odd elements are present "<<u<<" times\n";
    //find function
    //sort(v.begin(),v.end());
    //disp(v);
    vector<int>::iterator it2;
    it2 = find(v.begin(),v.end(),9);
    if(it2!=v.end()){
        cout<<"The element present v:"<<*it2<<endl;
    }
    else
        cout<<"The element is not present\n";
    //find_if function
    vector<int>::iterator it3;
    it3 = find_if(v.begin(),v.end(),pred2);
    if(it3!=v.end()){
        cout<<"The first even value is "<<(it3-v.begin())<<endl;
    }
    else
        cout<<"Element not found\n";
    int arr5[] = {1,1,2,2,2,3,3,4,5,6,7};
    vector<int> t(arr5,arr5+11);
    //disp(t);
    //vector<int>::iterator it5;
    //it5 = unique(t.begin(),t.end());
    //t.resize( it5 - v.begin() );
    //cout<<t.size()<<endl;
    //disp(t);
    //reverse function
    reverse(t.begin(),t.end());
    disp(t);
    //reverse function(Very important)
    int arr6[] = {1,2,4,1,23,45,4,43,33,22};
    vector<int> t1(10);
    reverse_copy(arr6,arr6+10,t1.begin());
    disp(t1);
    return 0;
}