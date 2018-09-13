#include <iostream>
using namespace std;

class Engine {
    int cylinder;

    public:
        Engine(int nc): cylinder(nc) {  }

        void start() {
            cout << getCylinder() << " cylinder engine started" ;
        }
        
        int getCylinder() {
            return cylinder;
        }
};

class Car : private Engine  { // Car has-a Engine
    public:
    
    // Let us name the parameter as 'nc' 
    Car(int nc) : Engine(nc) {}                     // Define the constructor
    
    void start() {
        cout << "car with " << Engine::getCylinder();
        cout <<" cylinder engine started" << endl;
        
        Engine::start();                            // Call the start function of Engine
    }
};

int main()  {
    int cylin;
    
    cin >> cylin;
    
    Car c(cylin);
    c.start();
    
    return 0;
}
