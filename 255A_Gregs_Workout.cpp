#include <iostream>
#include <vector>
using namespace std;

int main(){
    int workouts;
    cin>>workouts;
    vector<int> exercises(3,0);
    for(int i=0;i<workouts;i++){
        int exercise;
        cin>>exercise;
        exercises[i%3]+=exercise;
    }
    int maximum = max(exercises[0],max(exercises[1],exercises[2]));
    if(exercises[0] == maximum){
        cout<<"chest";
    }
    else if(exercises[1]==maximum){
        cout<<"biceps";
    }
    else if(exercises[2] == maximum){
        cout<<"back";
    }
    return 0;
}
