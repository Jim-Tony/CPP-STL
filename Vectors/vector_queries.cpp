#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    /*int arr[n];
    for(int i  = 0;i<n-1;i++){
        arr[i] = 0;
    }*/
    vector<int> arr(n,0);
    int q;
    cin>>q;
    while(q--){
        int r,l;
        cin>>l>>r;
        arr[l]++;
        if(r+1<n){
            arr[r+1]--;
        }
    }
    for(int i = 0;i<n-1;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i];
    }
    return 0;
}