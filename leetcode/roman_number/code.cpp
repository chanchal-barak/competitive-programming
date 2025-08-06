#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        } ;
        int n=s.size()-1;
        int sum=0;
        while(n>=0){
            if(n>0 && roman[s[n]]>roman[s[n-1]]){
                sum+=roman[s[n]]-roman[s[n-1]];
                n-=2;
            }
            else{
                sum+=roman[s[n]];
                n--;
            }
        }
        return sum;
    }
};
int main() {
    string s = "MCMXCIV";  // 1994
    Solution sol;
    cout << sol.romanToInt(s) << endl;
    return 0;
}



