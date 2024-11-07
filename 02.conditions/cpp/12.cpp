#include <iostream>

using namespace std;

int main() {
    string day;
    cin >> day;

    // Check if the day is a weekday or weekend
    if (day == "monday" || day == "tuesday" || 
        day == "wednesday" || day == "thursday" || 
        day == "friday") {
        cout << "weekday" << endl;
    } else if (day == "saturday" || day == "sunday") {
        cout << "weekend" << endl;
    } else {
        cout << "invalid day" << endl;
    }

    return 0;
}
