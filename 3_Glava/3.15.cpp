#include <iostream>
using namespace std;

int main() {
   
    setlocale(LC_ALL, "Russian");
    const int levels = 10;          
    const int sections = 8;         
    const int placesPerSection = 15;

    const int placesPerLevel = sections * placesPerSection; 
    const int totalPlaces = levels * placesPerLevel;          

    int placeNumber;

    
    cout << "Введите номер места (1-" << totalPlaces << "): ";
    cin >> placeNumber;

    
    int level = (placeNumber - 1) / placesPerLevel + 1;

    
    int posInLevel = (placeNumber - 1) % placesPerLevel + 1;

    
    int section = (posInLevel - 1) / placesPerSection + 1;

    
    cout << "Ярус: " << level << "\n";
    cout << "Секция: " << section << "\n";

    return 0;
}
