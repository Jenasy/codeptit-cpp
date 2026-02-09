#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct date{
    int day, month, year;
};

struct NhanVien{
    string id, name, gender, locate, tax;
    date birth, contact;
};

void input_day(date &a){
    char slash;
    cin>>a.day>>slash>>a.month>>slash>>a.year;
    cin.ignore();
}

void output_day(date a){
    cout<<setfill('0')<<setw(2)<<a.day<<"/"
    <<setfill('0')<<setw(2)<<a.month<<"/"
    <<a.year<<" ";
}

void nhap(NhanVien &a){
    a.id = "00001";
    getline(cin>>ws, a.name);
    getline(cin>>ws, a.gender);
    input_day(a.birth);
    getline(cin>>ws, a.locate);
    getline(cin>>ws, a.tax);
    input_day(a.contact);
}

void in(NhanVien a){
    cout<<a.id<<" "<<a.name<<" "<<a.gender<<" ";
    output_day(a.birth);
    cout<<a.locate<<" "<<a.tax<<" ";
    output_day(a.contact);
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

