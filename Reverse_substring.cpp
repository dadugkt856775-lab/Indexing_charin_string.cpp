#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Lubnarawoof";
    cout<<s<<endl;
    int n = s.length();
    reverse (s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}