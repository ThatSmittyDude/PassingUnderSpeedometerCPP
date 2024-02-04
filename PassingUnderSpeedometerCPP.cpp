#include <iostream>
#include <cmath>

//PassingUnderSpeedometerCPP
//Author: Austin Smith
//Email:ThaSmittyDude@outlook.com
//github.com/ThatSmittyDude
//Unix Timestamp: 1707062825

int main(){
    while (true){
    float tme, trklen, mph;

    std::cout << "Track length in miles: ";
    std::cin >> trklen;

    std::cout << "Lap time in seconds: ";
    std::cin >> tme;

    mph = (trklen / tme) * 3600;

    std::cout << "Average miles per hour: " << mph << std::endl;

    std::cout << "Continue? y/n: ";
    char user_input;
    std::cin >> user_input;

    if (user_input != 'y' && user_input != 'Y'){
        std::cout << "Exiting... " << std::endl;
        break;
    }
}
}