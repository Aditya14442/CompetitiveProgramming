#include <iostream>
#include <vector>
#include <string>
using namespace std;

// string solution(string& s, string& t, int in1, int in2,string answer){
//     if(s[in1]==t[in2]){
//         answer.append(s[in1]);
//     }
// }

string lcs(string& s, string& t, int m, int n){
    if(n==0 || m==0) return "";
    if(s[m-1]==t[n-1]) return lcs(s,t,m-1,n-1)+s[n-1];
    else{
        string a = lcs(s,t,m-1,n),b = lcs(s,t,m,n-1);
        if(a.size()>b.size()) return a;
        else return b;
    }
}

int main(){
    string s,t;
    cin>>s>>t;
    cout<<lcs(s,t,s.size(),t.size())<<endl;
    return 0;
}