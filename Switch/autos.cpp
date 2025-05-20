#include <iostream>
using namespace std;
int main (){
    int option;
    string car, motorcycle, bicycle;
    cout << "Hi, please seletect your vehicle type: "<<endl;
    cout << "1. Car "<<endl;
    cout << "2. Motorcycle "<<endl;
    cout << "3. Bicycle "<<endl;
    cout << "Option: ";
    cin >> option;

    switch (option){
        case 1:
        cout << "A car is a wheeled motor vehicle used for transportation. It consists of various parts, including the engine, chassis, body type, and steering, braking, and suspension systems."<<endl;
        break;
        case 2: 
        cout << "It is a two-wheeled vehicle powered by an engine. The frame and wheels constitute the fundamental structure of the vehicle. The steering wheel is the front wheel, and the drive wheel is the rear wheel."<<endl;
        break;
        case 3:
        cout << "A bicycle is a human-powered personal transportation vehicle. It is propelled by the rider, who operates the vehicle using leg muscle power, particularly by means of pedals or cranks"<<endl;
        break;
        default: 
        cout << "Select a valid option :)"<<endl;
        break;

    }
    return 0;
}