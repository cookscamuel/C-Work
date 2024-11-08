#ifndef RENT_MOVIE_H
#define RENT_MOVIE_H

/*
    Author: Samuel Cook
    Date: November 4
    File: rentableMovie.h
    Purpose: Derived class from Movie that is for movies that can be rented.
*/

#include "movieClass.h"

class RentableMovie : public Movie {

private:
    float rentPrice;
    int duration;

public:
    RentableMovie(std::string title, std::string director, int year, float price, int rentTime) : Movie(title, director, year), rentPrice(price), duration(rentTime) {}

    void displayMovie() override;

    float getRentPrice();

    int getRentDuration();

    void setRentPrice(float price);

    void setRentDuration(int duration);

};

#endif