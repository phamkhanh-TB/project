#include <bits/stdc++.h>
using namespace std;
struct sv{
    string ten;
    double gpa;
   friend bool operator < (sv p1, sv p2){
    return p1.gpa>p2.gpa;
   }
};
bool cmp(sv p1,sv p2){
    return p1.gpa >p2.gpa;
}
int main(){
    int n;cin>>n;
    sv ds[n];
    for(int i=0;i<n;i++){
       cin.ignore();
        getline(cin, ds[i].ten);
         cin>>ds[i].gpa;
    }
    sort(ds,ds+n);
    for (sv x: ds){
        cout<<x.ten<<" "<<x.gpa<<endl;
    }
}