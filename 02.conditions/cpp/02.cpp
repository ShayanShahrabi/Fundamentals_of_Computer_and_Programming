#include <iostream>

using namespace std;

int main(){
    string stone_name;
    cin >> stone_name;

    if (stone_name == "space"){
        cout << "blue";
    }
    else if (stone_name == "mind"){
        cout << "yellow";
    }
    else if (stone_name == "reality"){
        cout << "red" << endl;
    }
    else if (stone_name == "power"){
        cout << "purple";
    }
    else if (stone_name == "time"){
        cout << "green";
    }
    else if (stone_name == "soul"){
        cout << "orange";
    }

    
    // medium article link: 
    // https://medium.com/@teamcode20233/implementing-switch-statements-with-strings-in-c-453565b3bc50

    // switch (stone_name) {
    //     case "space":
    //         cout << "blue";
    //         break;
    //     case "mind":
    //         cout << "yellow";
    //         break;
    //     case "reality":
    //         cout << "red";
    //         break;
    //     case "power":
    //         cout << "purple";
    //         break;
    //     case "time":
    //         cout << "green";
    //         break;
    //     case "soul":
    //         cout << "orange";
    //         break;       
    // }

    return 0;
}