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
int main(){
    int k,n;
    cout<<"Enter size of vector ";
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"Enter the k value ";
    cin>>k;
    while(k--){
        rotate(v1.begin(),v1.end()-1,v1.end());
    }
    disp(v1);
    return 0;
}