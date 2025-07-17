#include <iostream>
#include <vector>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        long long size,px,py,qx,qy,max=0;
        long long sum=0;
        cin>>size>>px>>py>>qx>>qy;
        long long distance = (px-qx)*(px-qx) + (py-qy)*(py-qy);
        vector<int> array(size);
        for(int i=0;i<size;i++){
            cin>>array[i];
            sum+=array[i];
            if(array[i]>max) max=array[i];
        }
        if(size==1){
            if(distance==sum*sum) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            long long dist = max+max-sum;
            if(dist<0) dist=0;
            if(sum*sum>=distance && (dist)*(dist)<=distance) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}