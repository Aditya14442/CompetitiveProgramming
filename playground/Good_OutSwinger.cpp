#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& array , int time, int target){
    int bats_made=0;
    for(int i=0;i<array.size();i++){
        bats_made+=time/array[i];
        if(bats_made>target){
            return true;
        }
    }
    return false;
}

int main(){
    int n,t,bats_made=0,counter=0;
    cin>>n>>t;
    vector<int> time(n);
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    while(!isPossible(time,counter+1,t)){
        counter++;
    }
    cout<<counter;
    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void sort(vector<int>* array){
//     bool sorted=false;
//     while(!sorted){
//         sorted=true;
//         for(int i=0;i<array->size()-1;i++){
//             if((*array)[i]>(*array)[i+1]){
//                 swap((*array)[i],(*array)[i+1]);
//                 sorted=false;
//             }
//         }
//     }
// } 


// int main(){
//     int n,t,bats_made=0,counter=0;
//     cin>>n>>t;
//     vector<int> time(n);
//     for(int i=0;i<n;i++){
//         cin>>time[i];
//     }
//     sort(&time);
//     while(bats_made<t){
//         counter++;
//         bats_made=0;
//         for(int i=0;i<n;i++){
//             bats_made+=counter/time[i];
//         }
//     }
//     cout<<counter;
//     return 0;
// }