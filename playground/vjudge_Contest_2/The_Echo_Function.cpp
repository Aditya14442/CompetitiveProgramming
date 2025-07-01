#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map <long long, long long> memory;
long long solution(long long n){
    if (n==0) return 1;
    if(!memory.count(n))memory[n] = solution(n/2)+solution(n/3);
    return memory[n];
}

int main(){
    long long n;
    cin>>n;
    cout<<solution(n);
    return 0;
}