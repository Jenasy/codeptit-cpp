#include<iostream>
#include<string>
using namespace std;

struct date{
    int day, month, year;
};

struct person{
    string name;
    date birth;
};

void input_day(date &t){
    char slash;
    cin>>t.day>>slash>>t.month>>slash>>t.year;
}

void input(person p[], int n){
    for(int i=0; i<n; i++){
        cin>>p[i].name;
        input_day(p[i].birth);
    }
}

int compare(const date &n, const date &m){
    if(n.year != m.year) return n.year - m.year;
    if(n.month != m.month) return n.month - m.month;
    return n.day - m.day;
}

void sort(person p[], int n){
    for(int i=0; i<n-1; i++){
        int c=1;
        for(int j=0; j<n-i-1; j++){
            if(compare(p[j].birth,p[j+1].birth)<0){
                swap(p[j],p[j+1]);
                c=0;
            }
        }
        if(c) break;
    }
}

int main(){
    int n; cin>>n;
    person p[n];
    input(p,n);
    sort(p,n);
    cout<<p[0].name<<endl<<p[n-1].name;
}