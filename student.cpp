#include<bits/stdc++.h>
using namespace std;

struct Date{
    int day,month,year;
};

struct SinhVien{
    string name,croom;
    Date birthday;
    float GPA;
};

void input_day(Date &a){
    char slash;
    cin>>a.day>>slash>>a.month>>slash>>a.year;
    cin.ignore();
}

void output_day(Date a){
    cout<<setfill('0')<<setw(2)<<a.day<<"/"
    <<setfill('0')<<setw(2)<<a.month<<"/"
    <<a.year<<" ";
}

void nhapThongTinSV(SinhVien &sv){
    getline(cin, sv.name);
    cin>>sv.croom;
    input_day(sv.birthday);
    cin>>sv.GPA;
}

void inThongTinSV(SinhVien sv){
    cout<<"N20DCCN001 "<<sv.name<<" "<<sv.croom<<" ";
    output_day(sv.birthday);
    cout<<fixed<<setprecision(2)<<sv.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
