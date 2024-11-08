#ifndef HOUSE_MOVIE_H
#define HOUSE_MOVIE_H

/*
    Author: Samuel Cook
    Date: November 4
    File: inHouseMovie.h
    Purpose: Derived class from Movie that is for movies that can only be viewed in-house.
*/

#include "movieClass.h"

class InHouseMovie : public Movie {

private:
    float purchasePrice;
    bool availability;

public:
    InHouseMovie(string title, string director, int year, float price, bool isAvailable) : Movie(title, director, year), purchasePrice(price), availability(isAvailable) {}


};

#endif