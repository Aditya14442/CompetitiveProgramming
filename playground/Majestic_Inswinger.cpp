#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size,subSize,maxIndex=0,count=0,left=0;
    cin>>size;
    int start=0,end=0;
    vector<int> array(size),max_in_subarray(size);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cin>>subSize;
    for(int i=0;i<size;i++){
        if(maxIndex<count){
            maxIndex=i;
        
        while(count<left+subSize){
            if( array[count]>array[maxIndex]){
                maxIndex=count;
            }
            count++;
        }
    }
        max_in_subarray[i] = array[maxIndex];
    }
    cout<<"Array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<max_in_subarray[i]<<" ";
    }
    return 0;
}