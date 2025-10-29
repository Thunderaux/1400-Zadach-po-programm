#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int floors = 9;      
    const int entrances = 4;   
    const int apartmentsPerFloor = 6;

    int apartmentNumber;
    cout << "Введите номер квартиры: ";
    cin >> apartmentNumber;

   
    int apartmentsPerEntrance = floors * apartmentsPerFloor; 
    int entrance = (apartmentNumber - 1) / apartmentsPerEntrance + 1;

    
    int remainingApartments = (apartmentNumber - 1) % apartmentsPerEntrance + 1; 
    int floor = (remainingApartments - 1) / apartmentsPerFloor + 1;

    
    int positionOnFloor = (remainingApartments - 1) % apartmentsPerFloor + 1;

    cout << "Квартира находится:\n";
    cout << "1) в подъезде " << entrance << endl;
    cout << "2) на этаже " << floor << endl;
    cout << "3) является " << positionOnFloor << "-й на этаже" << endl;

    return 0;
}
