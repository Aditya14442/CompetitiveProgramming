#include <iostream>
#include <vector>
using namespace std;

int main(){
    int test_cases,n,a,b;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>n;
        b = -1;
        for(int i=0;i<n;i++){
            cin>>a;
            b= b & a;
        } 
        cout<<b<<endl;
    }
    return 0;
}