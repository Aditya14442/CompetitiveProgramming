#include <iostream>
using namespace std;


int main(){
    int test_cases,nums;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>nums;
        cout<< ((nums%4)==0? "Bob" : "Alice")<<endl;
    }
    return 0;
}