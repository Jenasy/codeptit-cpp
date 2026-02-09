#include<iostream>
#include<string>
using namespace std;

void output(string s){
    int index=1, sum=(s[s.length()-1]-'0');
    for(int i=s.length()-2; i>=0; i--){
        int n=s[i]-'0';
        switch(index%4){
            case 1:
                sum+=n*2;
                break;
            case 2:
                sum+=n*4;
                break;
            case 3:
                sum+=n*8;
                break;
            case 0:
                sum+=n*6;
                break;
        }
        index++;
    }
    
    if(sum%10==5||sum%10==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; cin>>s;
        output(s);
    }
}