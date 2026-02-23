#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
using namespace std;

struct date{
    int day, month, year;
};

struct SinhVien{
    string id, name, croom;
    date birth;
    float gpa;
};

void input_date(date &time){
    char slash;
    cin>>time.day>>slash>>time.month>>slash>>time.year;
}

void output_date(date time){
    cout<<setfill('0')<<setw(2)<<time.day<<'/'
    <<setfill('0')<<setw(2)<<time.month<<'/'
    <<setfill('0')<<setw(4)<<time.year<<" ";
}

void nhap(SinhVien ds[], int n){
    for(int i=0; i<n; i++){
        stringstream ss;
        ss<< "B20DCCN" << setfill('0') << setw(3) << i+1;
        ds[i].id = ss.str();
        getline(cin>>ws,ds[i].name);
        getline(cin>>ws,ds[i].croom);
        input_date(ds[i].birth);
        cin>>ds[i].gpa;
    }
}

void in(const SinhVien ds[], int n){
    for(int i=0; i<n; i++){
        cout<<ds[i].id<<" "<<ds[i].name<<" "<<ds[i].croom<<" ";
        output_date(ds[i].birth);
        cout<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}