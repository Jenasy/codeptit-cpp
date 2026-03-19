#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date(int day = 0, int month = 0, int year = 0)
            : day(day), month(month), year(year){}
        void input(istream &in);
        void output(ostream &out);
};

class NhanVien{
    private:
        string id, name, gender, location, tax;
        Date birth, contact;
    public:
        NhanVien(string id = "00001", string name = "", string gender = "", Date birth = Date(), string location = "", string tax = "", Date contact = Date())
            : id(id), name(name), gender(gender), birth(birth), location(location), tax(tax), contact(contact) {}
        friend istream& operator >> (istream& in, NhanVien &a);
        friend ostream& operator << (ostream& out, NhanVien &a);
};

void Date::input(istream& in){
    char slash;
    in>>day>>slash>>month>>slash>>year;
}

void Date::output(ostream& out){
    out<<setw(2)<<setfill('0')<<day<<"/"
    <<setw(2)<<setfill('0')<<month<<"/"
    <<year<<" ";
}

istream& operator >> (istream& in, NhanVien &a){
    getline(in>>ws,a.name);
    getline(in,a.gender);
    a.birth.input(in);
    getline(in>>ws,a.location);
    in>>a.tax;
    a.contact.input(in);
    return in;
}
ostream& operator << (ostream& out, NhanVien &a){
    out<<a.id<<" "<<a.name<<" "<<a.gender<<" ";
    a.birth.output(out);
    out<<a.location<<" "<<a.tax<<" ";
    a.contact.output(out);
    return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
