#include <iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        // cout<<k<<" "<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
        if(a==b && k>=a){
            cout<<(k-a+x)/x<<endl;
        }
        else if(k<a){
            if(k>=b) cout<<(k-b+y)/y<<endl;
            else cout<<0<<endl;;
        }
        else{
            if(k<b) cout<<(k-a+x)/x<<endl;
            else{
                if(a>b){
                    if(x>y) cout<<(k-b+y)/y<<endl;
                    else cout<<((k-a+x)/x)+    ((a-b+0)/y)    <<endl;
                }
                else{
                    if(x>y)cout<<((k-b+y)/y)+ ((b-a+0)/x)<<endl;
                    else cout<<(k-a+x)/x;
                }
            }
        }
    }
    return 0;
}