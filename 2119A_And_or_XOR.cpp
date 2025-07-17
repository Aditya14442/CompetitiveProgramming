#include <iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b+1){
            cout<<-1<<endl;
        }
        else if(a==b){
            cout<<0<<endl;
        }
        else if (a==b+1){
            if(a%2==0) cout<<-1<<endl;
            else cout<<y<<endl;
        }
        else if (a==b-1){
            if(a%2!=0) cout<<x<<endl;
            else cout<<min(x,y)<<endl;
        }
        else{
            if(x>y) {
                if(a%2==0){
                    if((b-a)%2) cout<<x*((b-a)/2) + y*((b-a)/2) +y<<endl;
                    else cout<<x*((b-a)/2) + y*((b-a)/2) <<endl;
                }
                else{
                    if((b-a)%2) cout<<x*((b-a)/2) + y*((b-a)/2) +x <<endl;
                    else cout<<x*((b-a)/2) + y*((b-a)/2) <<endl;
                }
            }
            else cout<<x*(b-a)<<endl;
        }
    }
    return 0;
}