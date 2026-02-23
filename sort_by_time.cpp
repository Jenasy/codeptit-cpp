#include<iostream>
using namespace std;

struct times{
    int hour, minute, second, all; 
};

void input(times l[], int n){
    for(int i=0; i<n; i++){
        cin>>l[i].hour>>l[i].minute>>l[i].second;
        l[i].all = l[i].hour * 3600 + l[i].minute * 60 + l[i].second;
    }
}

void sort(times l[], int n){
    for(int i=0; i<n-1; i++){
        int c=1;
        for(int j=0; j<n-i-1; j++){
            if(l[j].all>l[j+1].all){
                swap(l[j],l[j+1]);
                c=0;
            }
        }
        if(c) break;
    }
}

void output(times l[], int n){
    for(int i=0; i<n; i++){
        cout<<l[i].hour<<" "<<l[i].minute<<" "<<l[i].second<<endl;
    }
}

int main(){
    int n; cin>>n;
    times l[n];
    input(l,n);
    sort(l,n);
    output(l,n);
}