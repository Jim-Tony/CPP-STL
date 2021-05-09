#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> v_disp){
    for(auto it=v_disp.begin();it!=v_disp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int func1(int i ){
    return i*2;
}
int func2(int j,int k){
    return j*k;
}
int main(int argc, const char** argv){
    vector<int> v1{1,2,3,4,5,6};
    vector<int> v2(6);
    disp(v1);
    //transform
    transform(v1.begin(),v1.end(),v2.begin(),func1);
    disp(v2);
    //Transform binary 
    vector<int> v3{9,8,5,4,3,2,1};
    vector<int> v4{1,2,5,6,7,8,9};
    transform(v3.begin(),v3.end(),v4.begin(),v3.begin(),func2);
    disp(v3);
    //rotate
    vector<int> v5{-1,-100,3,99};
    int k;
    cin>>k;
    while (k--)
    {    
        rotate(v5.begin(),v5.end()-1,v5.end());
    }
    disp(v5);
    //rotate_copy
    int arr[] = {3,4,5,7,1,4,5};
    vector<int> v7(arr,arr+7);
    vector<int> v6(7);
    rotate_copy(v7.begin(),v7.begin()+3,v7.end(),v6.begin());
    disp(v6);
    //random_shuffle
    srand(unsigned(time(0)));
    random_shuffle(v7.begin(),v7.end());
    disp(v7);
    return 0;
}