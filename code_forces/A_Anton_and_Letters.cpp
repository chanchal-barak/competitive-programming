#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<char> v;
    char c;
    while(cin>>c){
        if(c>='a' && c<='z'){
            v.push_back(c);
        }
    }
    set<char>s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    cout<<s.size();
}