#include "Car.h"

class Car {
protected:
	string licensePlate;
	string manufacturer;
	string model;
	unsigned int dailyprice;
public:
	Car(string licensePlate, string manufacturer, string model, unsigned int dailyprice) {
		this->licensePlate = licensePlate;
		this->manufacturer = manufacturer;
		this->model = model;
		this->dailyprice = dailyprice;
	}
	string getManufacturer() {
		return this->manufacturer;
	}
	string getModel() {
		return this->model;
	}
	string getLicensePlate() {
		return this->licensePlate;
	}
	string getCarName() {
		return this->manufacturer+" "+ this->model;
	}
	string getDocumentName() {
		return this->getCarName()+" ["+this->licensePlate+"]";
	}
	string getManufacturer() {
		return this->manufacturer;
	}
	unsigned int getDailyPrice() {
		return this->dailyprice;
	}
	unsigned int getPriceForDays(unsigned int days) {
		return this->getDailyPrice() * days;
	}
	unsigned int getPriceForDaysWithDiscount(unsigned int days, double discount) {
		if (discount >= 1 || discount < 0) {
			discount = 0;
		}
		return this->getDailyPrice() * days * (1.0-discount);
	}
};