#include<iostream>
using namespace std;

void input(int *p, int n){
    for(int i=0; i<n; i++){
        cin>>*(p+i);
    }
}

void qs(int *a, int l, int r){
    if(l>=r) return;
    int i=l, j=r, mid = *(a+(l+r)/2);
    while(i<=j){
        while(*(a+i)<mid) i++;
        while(*(a+j)>mid) j--;
        if(i<=j){
            swap(*(a+i), *(a+j));
            i++;
            j--;
        }
    }
    qs(a,i,r);
    qs(a,l,j);
}

void output(int *p, int n){
    int **q = new int*[n];
    for(int i=0; i<n; i++) q[i] = new int[n];
    int k, top, left, right, bottom;
    k = top = left = 0;
    right = bottom = n-1;
    while(top<=bottom && left <= right){
        for(int i = left; i <= right; i++){
            q[top][i] = *(p+k);
            k++;
        }
        top++;
        for(int i = top; i <= bottom; i++){
            q[i][right] = *(p+k);
            k++;
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                q[bottom][i] = *(p+k);
                k++;
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom; i>= top; i--){
                q[i][left] = *(p+k);
                k++;
            }
            left++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<q[i][j]<<" ";
        }
        cout<<endl;
    }
    delete []q;
}

int main(){
    int n; cin>>n;
    int *p = new int [n*n];
    input(p,n*n);
    qs(p,0,n*n-1);
    output(p,n);
    delete []p;
}