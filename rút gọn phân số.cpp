#include <bits/stdc++.h>
using namespace std;
struct phanso{
    int a;
    int b;
    friend istream& operator >>(istream &is,phanso &p){
        is>>p.a>>p.b;
        return is;
    }
    friend ostream& operator <<(ostream &os,phanso p ){
        os<<p.a<<"/"<<p.b;
        return os;
    }
    friend phanso operator +(phanso p1,phanso p2){
        phanso p3;
        p3.a=(p1.a*p2.b+p1.b*p2.a);
        p3.b=(p1.b*p2.b);
        return p3;
    }
};
int UCLN(int A, int B) {
    for (int i = min(A, B); i > 0; --i) {
        if (A % i == 0 && B % i == 0)
            return i;
    }
    return 1; 
}
int main(){
     phanso p1,p2,p3,p4;
     cin>>p1;
     cin>>p2;
     cin>>p3;
     p4=p1+p2+p3;
     int x=UCLN(p4.a,p4.b);
     p4.a/=x;
     p4.b/=x;
     cout<<p4;
}