#include <iostream>
#include <vector>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int t=0;t<test_cases;t++){
        int dist=1;
        vector<int> a(2),b(2),c(2);
        cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
        if(a[0]<b[0] && a[0]<c[0]) dist+=min(b[0],c[0])-a[0];
        else if(a[0]>b[0] && a[0]>c[0]) dist+=a[0]-max(b[0],c[0]);

        if(a[1]<b[1] && a[1]<c[1]) dist+=min(b[1],c[1])-a[1];
        else if(a[1]>b[1] && a[1]>c[1]) dist+=a[1]-max(b[1],c[1]);
        cout<<dist<<endl;
    }
    return 0;
}