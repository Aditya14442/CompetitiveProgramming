#include <iostream>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(min(a,c)>=min(b,d)) cout<<"Gellyfish"<<endl;
        else cout<<"Flower"<<endl;
    }
    return 0;
}