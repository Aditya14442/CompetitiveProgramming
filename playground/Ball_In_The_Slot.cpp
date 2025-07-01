#include <iostream>
#include <vector>
using namespace std;

int longest_blank_space(vector<int>& array){
    int max_blank_space = 0;
    int blank_space = 0;
    for(int i=0;i<array.size();i++){
        if(array[i]==0){
            blank_space++;
        }
        else{
            if(blank_space>max_blank_space){
                max_blank_space=blank_space;
            }
            blank_space=0;
        }
    }
    if(blank_space>max_blank_space){
        max_blank_space=blank_space;
    }
    return max_blank_space;
}

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        vector<int> array(n);
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        cout<<longest_blank_space(array)<<endl;
    }
    return 0;
}