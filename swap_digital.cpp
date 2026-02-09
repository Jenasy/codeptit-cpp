#include<iostream>
#include<string>
using namespace std;

void output(string a){
    for(int i=a.length()-2; i>0; i--){
        int max = i, last = 0;
        for(int j=i+1; j<a.length(); j++){
            if(a[j]-'0'<a[i]-'0' && a[j]-'0'>last){
                max=j;
                last = a[j]-'0';
            }
        }
        if(max != i){
            swap(a[i],a[max]);
            cout<<a<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string a; cin>>a;
        output(a);
    }
}