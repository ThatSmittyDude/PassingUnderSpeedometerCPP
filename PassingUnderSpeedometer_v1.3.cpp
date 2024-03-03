#include <iostream>

//PassingUnderSpeedometer_v1.3
//Author: Austin Smith
//email: ThatSmittyDude@outlook.com
//GitHub: github.com/ThatSmittyDude
//Unix Timestamp: 1709427712

int main(){
    while (true){
    float lapTime, trackLength, milesPerHour;

    std::cout << "_________________________________________\n";
    std::cout << "\nTrack length in miles: ";
    std::cin >> trackLength;

    std::cout << "\n ";

    std::cout << "Lap time in seconds: ";
    std::cin >> lapTime; 
    std::cout << "\n ";
     
     milesPerHour = (trackLength / lapTime) * 3600; 

     std::cout << "========================================";
     std::cout << "\nLap average miles per hour: " << milesPerHour << std::endl;
     std::cout << "=========================================";
     std::cout << "\n ";
     

     std::cout << "\nContinue? y/n: ";
     char userInput;
     std::cin >> userInput;
     std::cout << "\n ";
     std::cout << "\n ";

     if (userInput != 'y' && userInput != 'Y'){
        std::cout << "Exiting... " << std::endl;
        break;
     }

    }
}