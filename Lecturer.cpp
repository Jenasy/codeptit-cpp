#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int q = 1;

class Lecturer{
    private:
        string id, name, field;
    public:
        Lecturer(string id = "", string name = "", string field = "")
            :id(id), name(name), field(field){}
        void input(){
            string tid = to_string(q++);
            while(tid.length()!=2) tid.insert(tid.begin(),'0');
            id = "GV" + tid;
            getline(cin>>ws,name);
            string tmp; getline(cin>>ws,tmp);
            for(int i=0; i<tmp.length(); i++){
                if( i==0 || tmp[i-1] == ' ' && tmp[i] != ' ') field += toupper(tmp[i]);
            }
        }
        void output(){
            cout<<id<<" "<<name<<" "<<field<<endl;
        }
        int compare(Lecturer a){
            stringstream ss1(name), ss2(a.name);
            string word1, word2;
            while(ss1>>word1);
            while(ss2>>word2);
            if(word1 != word2) return word1.compare(word2);
            return id.compare(a.id);
        }
        friend void sort(Lecturer ds[], int n){
            for(int i=0; i<n; i++){
                int ok = 1;
                for(int j=1; j<n-i; j++){
                    if(ds[j].compare(ds[j-1])<0){
                        swap(ds[j],ds[j-1]);
                        ok=0;
                    }
                }
                if(ok) return;
            }
        }
};

int main(){
    int t; cin>>t;
    Lecturer ds[t];
    for(int i=0; i<t; i++){
        ds[i].input();
    }
    sort(ds,t);
    for(int i=0; i<t; i++){
        ds[i].output();
    }
}