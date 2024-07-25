#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct phanso{
    int a,b;
    friend phanso operator +(phanso p1,phanso p2){
    phanso p3;
    p3.a=p1.a*p2.b+p1.b*p2.a;
    p3.b=p1.b*p2.b;
    return p3;
}
};
void rutgon(phanso &p){
    int x=gcd(p.a,p.b);
   p.a/=x;
   p.b/=x;
}
void nhap(phanso &p){
    cin>>p.a>>p.b;
}
void in(phanso p){
    cout<<p.a<<" "<<p.b;
}
int UCLN(int a, int b){
    for(int i=min(a,b);i>0;i--){
        if( a%i==0&& b%i==0){
            return i;
        }
    }
}
int main(){
   vector<phanso> v;
  int n;cin>>n;
   phanso p;p.a=0;p.b=1;
   for (int i=0;i<n;i++){
        phanso x; nhap(x);
        v.push_back(x);
   }
   for(auto x:v){
        p=p+x;
   }
   rutgon(p);
   in(p);
}