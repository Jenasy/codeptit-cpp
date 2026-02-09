#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct Point{
    double x,y;
};

void input(Point &a){
    cin>>a.x>>a.y;
}

double distance(Point a, Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(){
    int t; cin>>t;
    while(t--){
        Point a,b;
        input(a); input(b);
        cout<<fixed<<setprecision(4)<<distance(a,b)<<endl;
    }
    return 0;
}