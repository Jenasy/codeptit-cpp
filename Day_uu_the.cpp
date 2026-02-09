#include<iostream>
using namespace std;

bool check(int n, int odd, int even){
    if(n%2){
        if(odd>even) return true;
        return false;
    }
    else{
        if(even>odd) return true;
        return false;
    }
}

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        int a, n=0, odd=0, even=0;
        char check_end = ' ';
        while(check_end != '\n'){
            cin>>a;
            if(a%2) odd++;
            else even++;
            n++;
            check_end = getchar();
        }
        cout<<((check(n,odd,even))?"YES":"NO")<<endl;
    }
}