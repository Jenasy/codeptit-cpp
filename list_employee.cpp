#include<iostream>
#include<iomanip>
using namespace std;

int k=1;

struct date{
    int day, month, year;
};

struct NhanVien{
    string id, name, gender, locate, tax;
    date birth, contact;
};

void input_day(date &p){
    char slash;
    cin>>p.day>>slash>>p.month>>slash>>p.year;
    cin.ignore();
}

void output_day(date p){
    cout<<setfill('0')<<setw(2)<<p.day<<"/"
    <<setfill('0')<<setw(2)<<p.month<<"/"
    <<p.year<<" ";
}

void nhap(NhanVien &p){
    string a = to_string(k);
    k++;
    while(a.length()<5) a = '0' + a;
    p.id.append(a);
    getline(cin>>ws,p.name);
    getline(cin>>ws,p.gender);
    input_day(p.birth);
    getline(cin>>ws,p.locate);
    cin>>p.tax;
    input_day(p.contact);
}

void inds(NhanVien *p, int n){
    for(int i=0; i<n; i++){
        cout<<p[i].id<<" "<<p[i].name<<" "<<p[i].gender<<" ";
        output_day(p[i].birth);
        cout<<p[i].locate<<" "<<p[i].tax<<" ";
        output_day(p[i].contact);
        cout<<endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}