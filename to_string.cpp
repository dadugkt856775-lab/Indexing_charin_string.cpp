#include<iostream>
using namespace std;
int main(){
    int x = 27456;
    string s = to_string(x);
    s += "Dadu";
    cout<<s.length()<<endl;
    cout<<s;
}