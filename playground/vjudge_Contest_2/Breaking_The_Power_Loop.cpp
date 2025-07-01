#include <iostream>
using namespace std;

long long solution(long long n,long long k){
    if(n==0) return 0;
    if(n<k || k==1 ) return n;

    long long exp=1;
    while(n>=exp) exp*=k;
    return 1+solution(n-(exp/k),k);
}

int main(){
    long long n,k,answer=0;
    cin>>n>>k;
    while(n>0){
        long long power=1;
        while(power*k<=n)power*=k;
        n-=power;
        answer++;        
    }
    cout<<answer;
}



// int main(){
//     long long test_cases;
//     cin>>test_cases;
//     for(long long i=0;i<test_cases;i++){
//         long long n,k;
//         cin>>n>>k;
//         cout<<solution(n,k)<<endl;
//     }
//     return 0;
// }
