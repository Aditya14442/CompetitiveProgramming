#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    for(int t=0;t<test_case;t++){
        unordered_map<int,long long> freq;
        long long pairs=0;
        int size;
        cin>>size;
        vector<int> array(size);
        for(int i=0;i<size;i++) cin>>array[i];
        for(int i=0;i<size;i++) {
            array[i]-=i;
            if(freq.find(array[i])==freq.end()) freq[array[i]]=0;
            freq[array[i]]++;
        }
        for (const auto& pair : freq){
            pairs = pairs+((pair.second*(pair.second-1))/2);
        }
        cout<<pairs<<endl;
    }
    return 0;
}