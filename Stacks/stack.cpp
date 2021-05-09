#include<iostream>
#include<stack>
using namespace std;
void disp(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(int argc, const char** argv) {
    stack<int> st;
    for(int i=0;i<6;i++){
        st.push(i);
    }
    disp(st);
    cout<<st.size()<<endl;
    stack<int> st1;
    for(int i=0;i<6;i++){
        st1.push(i*2);
    }
    disp(st1);
    // swap function in stack
    swap(st,st1);
    //st and st1 are swapped
    disp(st1);

    return 0;
}
