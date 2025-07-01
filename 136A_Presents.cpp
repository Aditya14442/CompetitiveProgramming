#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int> gave(size);
    for(int i=0;i<size;i++){
        cin>>gave[i];
    }
    vector<int> took(size,0);
    for(int i=0;i<size;i++){
        took[gave[i]-1]=i+1;
    }
    for(int i=0;i<size;i++){
        cout<<took[i]<<" ";
    }
    return 0;
}