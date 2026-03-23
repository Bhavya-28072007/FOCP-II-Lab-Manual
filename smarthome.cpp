#include<iostream>
using namespace std;
class SmartLight{
    private:
    string brand;
    int brightness;
    bool isOn;
//default
public:
    SmartLight(){
        brand = 'unknown';
        brightness = 50;
        isOn = false;
    }
     SmartLight(string b, int br, bool state) {
        brand = b;
        brightness = br;
        isOn = state;
    }
    void turnOn() {
        isOn = true;
        cout << brand << " light is turned ON.\n";
    }
void turnOff() {
        isOn = false;
        cout << brand << " light is turned OFF.\n";
    }

    void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
            if (brightness > 100)
                brightness = 100;
        }
        cout << "Brightness increased to " << brightness << endl;
    }

    void decreaseBrightness() {
        if (brightness > 0) {
            brightness -= 10;
            if (brightness < 0)
                brightness = 0;
        }
         cout << "Brightness decreased to " << brightness << endl;
    }

    // Display Status
    void displayStatus() {
        cout << "\nBrand: " << brand << endl;
        cout << "Brightness: " << brightness << endl;
        cout << "Status: " << (isOn ? "ON" : "OFF") << end;
    // Destructor
    ~SmartLight() {
        cout << "Object destroyed\n";
    }
};
    int main() {

    // Object 1 (Default)
    SmartLight light1;

    // Object 2 (Parameterized)
    SmartLight light2("Philips", 70, true);

    // Testing light1
    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    // Testing light2
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
}

