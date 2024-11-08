#include "movieClass.h"

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