#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int>& array){
    
}

int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int size;
        cin>>size;
        vector<int> array(size);
        for(int i=0;i<size;i++) cin>>array[i];
        solution(array);
    }
    return 0;
}