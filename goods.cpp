#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Product{
    int id;
    string name, type;
    double purchase, sell, profit;
};

void input(Product list[], int n){
    for(int i=0; i<n; i++){
        list[i].id = i+1;
        getline(cin>>ws,list[i].name);
        getline(cin>>ws,list[i].type);
        cin>>list[i].purchase>>list[i].sell;
        list[i].profit = list[i].sell - list[i].purchase;
    }
}

void sort(Product list[], int n){
    while(1){
        int c=1;
        for(int i=0; i<n-1; i++){
            if(list[i].profit < list[i+1].profit) {
                swap(list[i],list[i+1]);
                c=0;
            }
        }
        if(c) break;
    }
}

void output(Product list[], int n){
    for(int i=0; i<n; i++){
        cout<<list[i].id<<" "<<list[i].name<<" "<<list[i].type<<" "<<fixed<<setprecision(2)<<list[i].profit<<endl;
    }
}



int main(){
    int n; cin>>n;
    Product list[n];
    input(list,n);
    sort(list,n);
    output(list,n);
}