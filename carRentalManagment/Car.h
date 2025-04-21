#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
protected:
    string licensePlate;
    string manufacturer;
    string model;
    unsigned int dailyprice;

public:
    Car(string licensePlate, string manufacturer, string model, unsigned int dailyprice);

    string getManufacturer();
    string getModel();
    string getLicensePlate();
    string getCarName();
    string getDocumentName();
    unsigned int getDailyPrice();
    unsigned int getPriceForDays(unsigned int days);
    unsigned int getPriceForDaysWithDiscount(unsigned int days, double discount);
};

#endif // C#pragma once
