#include <iostream>
#include <string>
using namespace std;

string solution(string s, int size){
    int count=0;
    string answer;
    for(int i=0;i<size/2;i++){
        if(s[i]!=s[size-i-1]) count++;
    }
    for(int i=0;i<count;i++) answer.push_back('0');
    for(int i=count;i<=size-count;i++){
        if (size%2==1){
            answer.push_back('1');
        }
        else{
            if(count%2==0) i%2==0? answer.push_back('1') : answer.push_back('0');
            else i%2!=0 ? answer.push_back('1') : answer.push_back('0');
        }
    }
    for(int i=size-count+1;i<=size;i++) answer.push_back('0');
    return answer;
}

int main(){
    int test_case,n;
    char c;
    string s;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        cin>>n>>s;
        cout<<solution(s,n)<<endl;
    }
    return 0;
}