#include <iostream>
#include <vector>
using namespace std;

bool solution(int a, int b, int c, int d){
    bool intersect=false;
    int counter = a;
    while(counter!=b){
        if(c==counter) intersect = !intersect;
        if(d==counter) intersect = !intersect;
        counter++;
        if(counter>12)counter%=12;
    }
    return intersect;
}

int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout << (solution(a,b,c,d) ? "YES\n" : "NO\n");
    }
    return 0;
}