#include "movieClass.h"

/*
    Author: Samuel Cook
    Date: November 9
    File: movieClass.cpp
    Purpose: Logic for the functions found in the base class for movies.
*/


std::string Movie::getTitle() {
    return title;
}

std::string Movie::getDirector() {
    return director;
}

int Movie::getYear() {
    return releaseYear;
}


void Movie::setTitle(std::string newTitle) {
    this->title = newTitle;
}

void Movie::setDirector(std::string newDirector) {
    this->director = newDirector;
}

void Movie::setYear(int newYear) {
    this->releaseYear = newYear;
}
