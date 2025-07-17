#include <iostream>
#include <math.h>
using namespace std;
long long modExp(long long base, long long exponent, long long modulo){
    long long product = 1;
    base%=modulo;
    while(exponent!=0){
        if(exponent%2==1){
            product = (product*base)%modulo;
        }
        base=(base*base)%modulo;
        exponent/=2;
    }
    return product;
}
void solution(int val){
    long long mode=1e9+7;
    long long nodes = pow(2,val)-1;
    cout<<(6*(modExp(4,nodes-1,mode)))%mode<<endl;
}
int main(){
    int val;
    cin>>val;
    solution(val);
    return 0;
}