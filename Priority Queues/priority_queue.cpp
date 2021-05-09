#include<iostream>
#include<queue>
using namespace std;
class Compare{
    public:
        bool operator() (int a,int b){
            return (a>b);
        }
};
int main(int argc, const char** argv) {
    priority_queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    while (!q.empty())
    {

        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    //printing elements in ascending order
    priority_queue<int,vector<int>,Compare> q1;
    q1.push(1);
    q1.push(9);
    q1.push(8);
    while (!q1.empty())
    {

        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;
    priority_queue<int,vector<int>,Compare> q2;
    q2.push(5);
    q2.push(6);
    q2.push(7);
    q2.push(9);
    while (!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    q2.swap(q1);
    while (!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    return 0;
}