#include<bits/stdc++.h>
using namespace std;

template <class T>
void dispQ(queue<T> qd){
    while(!qd.empty()){
        cout<<qd.front()<<" ";
        qd.pop();
    }
    cout<<"\n";
}

queue<int> removemulthree(queue<int> qw){
    queue<int> qm;
    while(!qw.empty()){
        if(qw.front()%3!=0){
            qm.push(qw.front());
        }
        qw.pop();
    }
    return qm;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> q1;
    for(int i=0;i<10;i++){
        q1.push(i);
    }
    cout<<"The size is "<<q1.size()<<endl;
    dispQ(q1);
    //We are gonna remove multiplies of 3 in this queue
    queue<int> qe = removemulthree(q1);
    dispQ(qe);
    queue<char> q2;

    q2.push('g');
    q2.push('t');
    q2.push('e');
    q2.push('r');
    q2.push('i');
    dispQ(q2);
}