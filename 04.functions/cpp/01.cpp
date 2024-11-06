#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
void print_data(int year_month){
    int year = year_month / 100;
    if (year < 10){
        cout << "saal:" << '0' << year << endl;    
    }else{
        cout << "saal:" << year << endl;
    }

    int month = year_month % 100;
    if (month < 10){
        cout << "maah:" << '0' << month << endl;    
    }else{
        cout << "maah:" << month << endl;
    }
}
//----------------------------------------------------------------------------
int main(){
    int year_month;
    cin >> year_month;
    print_data(year_month);
    return 0;
}