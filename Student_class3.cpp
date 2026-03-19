#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;

class Date{
private:
    int day, month, year;
public:
    Date(int day = 0, int month = 0, int year = 0)
        : day(day), month(month), year(year){}
    void input(istream &in){
        char slash;
        in >> day >> slash >> month >> slash >> year;
    }
    void output(ostream &out) const{
        out << setw(2) << setfill('0') << day << "/"
            << setw(2) << setfill('0') << month << "/"
            << year << " ";
    }
};

class SinhVien{
private:
    string id, name, croom;
    Date birth;
    float GPA;
public:
    SinhVien(){
        id = "B20DCCN001";
    }

    void standard(){
        stringstream ss(name);
        string res="", word;
        while(ss >> word){
            word[0] = toupper(word[0]);
            for(int i=1; i<word.length(); i++){
                word[i] = tolower(word[i]);
            }
            if(!res.empty()) res += " ";
            res += word;
        }
        name = res;
    }

    void input(istream &in){
        getline(in >> ws, name);
        standard();
        getline(in, croom);
        birth.input(in);
        in >> GPA;
    }

    void output(ostream &out) const{
        out << id << " " << name << " " << croom << " ";
        birth.output(out);
        out << fixed << setprecision(2) << GPA;
    }

    friend istream& operator>>(istream &in, SinhVien &a){
        a.input(in);
        return in;
    }

    friend ostream& operator<<(ostream &out, const SinhVien &a){
        a.output(out);
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
}