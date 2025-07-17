#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        long long x,y,k;
        cin>>x>>y>>k;
        cout<<k+ceil((y*k)+(k-1)/(x-1))<<endl;;
        // cout<<((y/x)+k)<<endl;
    }
    return 0;
}