#include <iostream>

using namespace std;

int main(){
    int R, G, Y;
    R = 0;
    G =0;
    Y = 0;

    string sticker;
    cin >> sticker;

    char parameter1, parameter2, parameter3, parameter4, parameter5;
    parameter1 = sticker[0];
    parameter2 = sticker[1];
    parameter3 = sticker[2];
    parameter4 = sticker[3];
    parameter5 = sticker[4];

    if(parameter1 == 'Y'){
        Y += 1;
    }
    if(parameter1 == 'G'){
        G += 1;
    }
    if(parameter1 == 'R'){
        R += 1;
    }

    if(parameter2 == 'Y'){
        Y += 1;
    }
    if(parameter2 == 'G'){
        G += 1;
    }
    if(parameter2 == 'R'){
        R += 1;
    }

    if(parameter3 == 'Y'){
        Y += 1;
    }
    if(parameter3 == 'G'){
        G += 1;
    }
    if(parameter3 == 'R'){
        R += 1;
    }

    if(parameter4 == 'Y'){
        Y += 1;
    }
    if(parameter4 == 'G'){
        G += 1;
    }
    if(parameter4 == 'R'){
        R += 1;
    }

    if(parameter5 == 'Y'){
        Y += 1;
    }
    if(parameter5 == 'G'){
        G += 1;
    }
    if(parameter5 == 'R'){
        R += 1;
    }

//    cout << R << G << Y;

    if((R >= 3) || (R >= 2 && Y >= 2) || (G == 0)){
        cout << "nakhor lite";
    }
    else{
        cout << "rahat baash";
    }
    return 0;
}