#include <iostream>
using namespace std;

int score(int i, int j){
    if(i>4) i= 9-i;
    if(j>4) j = 9-j;
    return min(i+1,j+1);
}

int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int totalScore=0;
        char x;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>x;
                if(x=='X') totalScore+=score(i,j);
            }
        }
        cout<<totalScore<<endl;
    }
    return 0;
}