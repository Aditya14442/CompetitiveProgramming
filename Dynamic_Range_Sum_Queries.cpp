#include <iostream>
#include <vector>
using namespace std;

void update(vector<int>& fenwick, int index,int change){
    while(index<=fenwick.size()){
        fenwick[index]+=change;
        index+=(index&(-index));
    }
}

int query(vector<int>& fenwick, int index){
    int val = 0;
    while(index>0){
        val+=fenwick[index];
        index-=(index&(-index));
    }
    return val;
}

int main(){
    int size,queries;
    cin>>size>>queries;
    vector<int> array(size),fenwick(size+1,0);
    for(int i=0;i<size;i++) {
        cin>>array[i];
        update(fenwick,i+1,array[i]);
    }
    for(int i=0;i<queries;i++){
        int mode, x,y;
        cin>>mode>>x>>y;
        if(mode==1){
            update(fenwick,x,y-array[x-1]);
            array[x-1]=y;
        }
        else if(mode==2){
            cout<<query(fenwick,y)-query(fenwick,x-1)<<endl;
        }
    }

    return 0;
}