#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Declerations
    int inc_needed;
    vector<int> increments(12,0);

    //Take inputs
    cin>>inc_needed;
    for(int i=0;i<12;i++){
        cin>>increments[i];
    }

    //Sort
    bool check=true;
    while(check){
        check=false;
        for(int i=0;i<11;i++){
            if(increments[i]<increments[i+1]){
                swap(increments[i],increments[i+1]);
                check=true;
            }
        }
    }

    //Find solution
    int months=0, height=0;
    for (int i=0;i<12;i++){
        if(height>=inc_needed){
            break;
        }
        height+=increments[i];
        months++;
    }
    if(height>=inc_needed){
        cout<<months;
        return 0;
    }
    cout<<-1;
    return 0;
}