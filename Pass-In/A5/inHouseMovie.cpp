#include "inHouseMovie.h"

/*
    Author: Samuel Cook
    Date: November 10
    File: inHouseMovie.cpp
    Purpose: Logic for the functions found in the associated header file (inHouseMovie.h).
*/


void InHouseMovie::displayMovie() {
    std::cout << "============= IN-HOUSE =============" << std::endl;
    std::cout << "Title: " << this->getTitle() << std::endl;
    std::cout << "Year: " << this->getYear() << std::endl;
    std::cout << "Director: " << this->getDirector() << std::endl;
    std::cout << "Purchase Price: $" << this->getPurchasePrice() << std::endl;
    std::string availabilityStatus = (getAvailability()) ? "This movie is currently available." : "This movie is currently unavailable.";
    std::cout << availabilityStatus << std::endl;
    std::cout << "====================================" << std::endl << std::endl;
}

float InHouseMovie::getPurchasePrice() {
    return this->purchasePrice;
}

int InHouseMovie::getAvailability() {
    return this->availability;
}

void InHouseMovie::setPurchasePrice(float price) {
    this->purchasePrice = price;
}

void InHouseMovie::setAvailability(bool isAvailable) {
    this->availability = isAvailable;
}