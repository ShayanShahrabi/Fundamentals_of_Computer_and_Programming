#include <iostream>

using namespace std;

int main(){
    string day;
    cin >> day;

    if (day == "monday" || day == "tuesday" ||
        day == "thursday" || day == "friday" || day == "wednesday"){
            cout << "weekday";
    } else if (day == "saturday" || day == "sunday"){
        cout << "weekend";
    }else{
        cout << "invalid day";
    }

    return 0;
}