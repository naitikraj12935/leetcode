class ParkingSystem {
    private:
    int carslots[3]={0};
public:
    ParkingSystem(int big, int medium, int small) {
        carslots[0]=big;
        carslots[1]=medium;
        carslots[2]=small;
    }
    
    bool addCar(int cartype) {
        carslots[cartype-1]--;
        return carslots[cartype-1]>=0;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */