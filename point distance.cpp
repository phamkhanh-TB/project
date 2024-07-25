#include <bits/stdc++.h>
using namespace std;
struct toado{
    int a,b;
};
void nhap(toado &p){
    cin>>p.a>>p.b
}
double kc(toado t1,toado t2){
    return sqrt(pow((t1.a-t2.a),2)+pow((t1.b-t2.b),2));
};
int main(){
    int n;cin>>n;
    toado t1,t2;
    
    for (int i=0;i<n;i++){
        nhap(t1);nhap(t2);
        cout<<fixed<<setprecision(4)<<kc(t1,t2)<<endl;
    }
}