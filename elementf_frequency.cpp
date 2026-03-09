#include<iostream>
#include<vector>
using namespace std;

const int MAXLIST = 10000;

typedef struct list{ 
    int n; 
    int nodes[MAXLIST];
}; list ds; 

int main(){
    int a[MAXLIST]{};
    vector<int> v;
    int tmp;
    while(cin>>tmp){
        a[tmp]++;
        v.push_back(tmp);
    }
    for(int x:v){
        if(a[x]){
            cout<<x<<" "<<a[x]<<endl;
            a[x]=0;
        }
    }
}