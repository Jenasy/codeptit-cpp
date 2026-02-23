#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.141592653589793238
using namespace std;

struct Point{
    double x,y;
};

void input(Point a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i].x>>a[i].y;
    }
}

bool check(Point a[], int n){
    Point v[n-1];
    v[0].x = a[1].x - a[0].x;
    v[0].y = a[1].y - a[0].y;
    for(int i=2; i<n; i++){
        v[i-1].x = a[i].x - a[0].x;
        v[i-1].y = a[i].y - a[0].y;
        if(v[0].x*v[i-1].y != v[i-1].x*v[0].y) return false; 
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        Point a[3];
        input(a,3);
        if(check(a,3)==true){
            cout<<"INVALID"<<endl;
            continue;
        }
        double line[3];
        line[0] = sqrt(pow(a[0].x - a[1].x, 2) + pow(a[0].y - a[1].y,2));
        line[1] = sqrt(pow(a[1].x - a[2].x, 2) + pow(a[1].y - a[2].y,2));
        line[2] = sqrt(pow(a[0].x - a[2].x, 2) + pow(a[0].y - a[2].y,2));
        double area = sqrt((line[0] + line [1] + line [2])*(line[0]+line[1]-line[2])*(line[0]-line[1]+line[2])*(line[1]+line[2]-line[0]))/4;
        double R = line[0] * line[1] * line[2] / (4*area);
        double area_cir =  PI * R * R;
        cout<<fixed<<setprecision(3)<<area_cir<<endl;
    }
}