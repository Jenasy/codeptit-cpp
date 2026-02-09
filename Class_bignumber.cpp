//làm bài số nguyên lớn:

//1. khai báo class BigNumber sử dụng string để lưu số nguyên lớn ; hàm tạo

//2. định nghĩa 2 chồng toán tử +  và >

//3. định nghĩa 2 chồng toán tử << và >>

 

#include <iostream>

#include <iomanip>

using namespace std;

using std::setw;

class PhoneNumber {

    friend ostream &operator<<( ostream&, const PhoneNumber & );

    friend istream &operator>>( istream&, PhoneNumber & );

private:

    char areaCode[ 4 ];  // 3-ki tu cho ma vung va 1 ky tu null

    char exchange[ 4 ];  // 3-ki tu sdt va ky tu null

    char line[ 5 ];      // 4-ki tu cuoi sdt va ky tu null

    

}; // ket thuc class PhoneNumber

// nap chong toan tu << khong the la

ostream &operator<<( ostream &output, const PhoneNumber &num ){

    output << "(" << num.areaCode << ") "

    << num.exchange << "-" << num.line;

    return output;

} // ket thuc ham operator<<

 

// nap chong toan tu >> khong the la

// mot ham thanh vien neu ta muon goi voi cin: cin >> somePhoneNumber;

istream &operator>>( istream &input, PhoneNumber &num )

{ //(123) 456-7890

    input.ignore();                     // bo qua (

    input >> setw( 4 ) >> num.areaCode; // ma vung 123

    input.ignore( 2 );                  // bo qua ) va dau cach

    input >> setw( 4 ) >> num.exchange; // nhap 3 so dau va bo qua dau - 456

    input.ignore();

    input >> setw( 5 ) >> num.line;     // nhap 4 so cuoi 7890

    return input;      // cho phep cin >> a >> b >> c;

    

} // Ket thuc ham operator>>

int main()

{

    PhoneNumber phone; // tao doi tuong phone

    cout << "Nhập số điện thoại theo định dạng (123) 456-7890:\n";

    // cin >> phone goi  operator>>( cin, phone )

    cin >> phone;

    cout << "Số điện thoại đã nhập: " ;

    // cout << phone goi operator<<( cout, phone )

    cout << phone << endl;

    return 0;

} // end main