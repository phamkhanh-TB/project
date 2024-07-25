// số báo danh: 80
// mã số sinh viên: 23020168
// họ tên: Trần Thị Thanh Vân
#include <bits/stdc++.h>

using namespace std;
struct sinhvien{
    string ten;
    double diemso;
};
bool cmp(sinhvien a, sinhvien b)
{
    return a.diemso < b.diemso;
}
int main()
{
    ifstream inp("openstudentdata.txt");
    ofstream out("beststudent.txt");
    int n;
    inp >> n;
    sinhvien a[n + 5];
    for(int i = 1; i <= n; i++)
    {
        inp >> a[i].ten >> a[i].diemso;
        for(int j = 0; j < (int)a[i].ten.size(); j++)
            if(a[i].ten[j] == '_') a[i].ten[j] = ' ';
    }
    sort(a + 1, a + 1 + n, cmp);
    //out << "Nhung sinh vien co diem thap nhat la: \n";
    for(int i = 1; i <= n; i++)
        if(a[i].diemso > a[1].diemso) break;
        else out << a[i].ten << " " << a[i].diemso << "\n";
    return 0;
}

