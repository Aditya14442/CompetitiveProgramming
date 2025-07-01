#include <iostream>
#include <vector>
using namespace std;
int main(){
    int events;
    cin>>events;
    int available_officers=0,untereated_crime=0;
    for(int i=0;i<events;i++){
        int event=0;
        cin>>event;
        if(event>0){
            available_officers+=event;
        }
        else if(event==-1){
            if(available_officers>0){
                available_officers--;
            }
            else{
                untereated_crime++;
            }
        }
    }
    cout<<untereated_crime;
    return 0;
}