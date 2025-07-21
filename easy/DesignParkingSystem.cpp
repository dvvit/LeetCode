#include <iostream>
using namespace std;

class ParkingSystem {
    int bigSlots;
    int mediumSlots;
    int smallSlots;
public:
    ParkingSystem(int big, int medium, int small) {
        bigSlots = big;
        mediumSlots = medium;
        smallSlots = small;
    }
    bool addCar(int carType) {
        if(carType == 1) {
            if(bigSlots > 0) {
                bigSlots--;
                return true;
            }
        } else if(carType == 2) {
            if(mediumSlots > 0) {
                mediumSlots--;
                return true;
            }
        } else if(carType == 3) {
            if(smallSlots > 0) {
                smallSlots--;
                return true;
            }
        }
        return false;
    }
};

int main() {
    int big, medium, small;
    cin >> big >> medium >> small;
    ParkingSystem parkingSystem(big, medium, small);
    int queries;
    cin >> queries;
    while(queries--) {
        int carType;
        cin >> carType;
        cout << (parkingSystem.addCar(carType) ? "true" : "false") << "\n";
    }
    return 0;
}
