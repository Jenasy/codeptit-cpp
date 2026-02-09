#include<iostream>
#include<vector>
using namespace std;

void input(int a[40][40], int n){
    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=k++;
        }
    }
}

void output(vector<int> v){
    for(vector<int>::reverse_iterator it = v.rbegin(); it!= v.rend(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void output(int a[40][40], int n){
    vector<int> b,c;
    int k = 16*n*n;
    int top = 0, left = 0, right = n-1, bottom = n-1;
    while(k){
        while(top<=bottom && left <= right){
            for(int i=top; i<= bottom; i++) {
                k--;
                b.push_back(a[i][left]);
            }
            right--;
            left++;
            for(int i=left; i<=right; i++){
                k--;
                b.push_back(a[bottom][i]);
            }
            top++;
            bottom--;
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    k--;
                    b.push_back(a[i][right]);
                }
                left++;
                right --;
            }
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    k--;
                    b.push_back(a[top][i]);
                }
                top++;
                bottom--;
            }
        }
    }
    output(b);
}

int main(){
    int t; cin>>t;
    while(t--){
        int a[40][40],n;
        cin>>n;
        input(a,4*n);
        output(a,n);
    }
}