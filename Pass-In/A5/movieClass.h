#ifndef MOVIE_CLASS_H
#define MOVIE_CLASS_H

/*
    Author: Samuel Cook
    Date: November 4
    File: movieClass.h
    Purpose: Abstract class/base class for movies.
*/


#include <iostream>
#include <string>


class Movie {

private:
    std::string title;
    std::string director;
    int releaseYear;

public:

    // Constructor
    Movie(std::string mTitle, std::string mDirector, int mYear) : title(mTitle), director(mDirector), releaseYear(mYear) {}

    Movie() {}

    // Destructor
    virtual ~Movie() = default;

    // Display movie function that can change based on the derived type of movie.
    virtual void displayMovie() = 0;

    // Getters and Setters
    std::string getTitle();

    std::string getDirector();

    int getYear();

    void setTitle(std::string newTitle);

    void setDirector(std::string newDirector);

    void setYear(int newYear);
    

};

#endif
