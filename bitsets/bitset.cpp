#include<bits/stdc++.h>
using namespace std;

int main(){
    bitset<8> b(99);
    
    cout<<"Binary form of 99 is "<<b<<"\n";
    cout<<"The bit at position 3 is" <<b.test(3)<<endl;//Returns whatever bit is in position 3
    //flip() changes 0s to 1s and vice versa
    
    cout<<"The Size of set bits is "<<b.count()<<endl;

    //set() sets all the bits to 1
    
    b.set();
    
    cout<<"after converting to set bits\n";
    
    cout<<b<<"\n";
    
    //reset() resets all bits to zero
    
    b.reset();
    
    cout<<"after converting to 0 bits\n";
    
    cout<<b<<"\n";

    bitset<8> c(15);
    cout<<"The Binary form of 15 is "<<c<<endl;
    cout<<c.any()<<endl; //Returns true if there's atleast 1 set bit
    cout<<c.all()<<endl; //Returns true if all are set bits
    cout<<c.none()<<endl; //Returns true if all are 0 bits
    
    cout<<"In string format "<<c.to_string()<<endl;
    cout<<"In number format "<<c.to_ulong()<<endl;

    return 0;
}