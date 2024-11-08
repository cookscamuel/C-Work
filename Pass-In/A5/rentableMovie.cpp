#include "rentableMovie.h"

void RentableMovie::displayMovie() {
    std::cout << "==============================" << std::endl;
    std::cout << "Title: " << this->getTitle() << std::endl;
    std::cout << "Year: " << this->getYear() << std::endl;
    std::cout << "Director: " << this->getDirector() << std::endl;
    std::cout << "Rent Price: $" << this->getRentPrice() << std::endl;
    std::cout << "Rental Duration: " << this->getRentDuration() << " days." << std::endl;
}

float RentableMovie::getRentPrice() {
    return this->rentPrice;
}

int RentableMovie::getRentDuration() {
    return this->duration;
}

void RentableMovie::setRentPrice(float price) {
    this->rentPrice = price;
}

void RentableMovie::setRentDuration(int duration) {
    this->duration = duration;
}
