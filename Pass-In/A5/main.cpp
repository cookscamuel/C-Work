#include "rentableMovie.h"
#include "inHouseMovie.h"
#include <limits>

/*
    Author: Samuel Cook
    Date: November 11
    File: main.cpp
    Purpose: Menu for users to view and add to a list of movies.
*/

const int MAX_RENTABLE_MOVIES = 10;
const int MAX_IN_HOUSE_MOVIES = 10;

void displayMovies(int choice, RentableMovie rMovies[], InHouseMovie hMovies[], int rentCount, int houseCount);

void addMovie(RentableMovie rentArray[], InHouseMovie houseArray[], int *rCount, int *hCount);


int main() {


    RentableMovie rentableMovies[MAX_RENTABLE_MOVIES];
    InHouseMovie inHouseMovies[MAX_IN_HOUSE_MOVIES];

    RentableMovie theLighthouse("The Lighthouse", "Robert Eggers", 2019, 12.99, 5);
    InHouseMovie theShining("The Shining", "Stanley Kubrick", 1980, 16.99, false);

    rentableMovies[0] = theLighthouse;
    inHouseMovies[0] = theShining;

    int rentMovieCount = 1;
    int houseMovieCount = 1;
    std::string movieType;

    system("cls");

    while(true) {

        std::string selection;

        std::cout << "============= MAIN MENU ============" << std::endl;
        std::cout << "1 - Display All Movies" << std::endl;
        std::cout << "2 - Display Rentable Movies" << std::endl;
        std::cout << "3 - Display In-House Movies" << std::endl;
        std::cout << "4 - Add a New Movie" << std::endl;
        std::cout << "5 - Exit\nPlease enter your selection: ";
        getline(std::cin, selection);

        if (selection == "1") {
            system("cls");
            std::cout << "\nDisplaying All Movies...\n" << std::endl;

            displayMovies(3, rentableMovies, inHouseMovies, rentMovieCount, houseMovieCount);
            
        }
        else if (selection == "2") {
            system("cls");
            std::cout << "\nDisplaying All Rentable Movies...\n" << std::endl;

            displayMovies(1, rentableMovies, inHouseMovies, rentMovieCount, houseMovieCount);

        }
        else if (selection == "3") {
            system("cls");
            std::cout << "\nDisplaying All In-House Movies...\n" << std::endl;
            
            displayMovies(2, rentableMovies, inHouseMovies, rentMovieCount, houseMovieCount);
        }
        else if (selection == "4") {
            system("cls");
            std::cout << "\nAdding New Movie...\n" << std::endl;

            addMovie(rentableMovies, inHouseMovies, &rentMovieCount, &houseMovieCount);
            system("cls");

        }
        else if (selection == "5") {
            system("cls");
            std::cout << "\nExiting...\n" << std::endl;
            break;
        }
        else {
            system("cls");
        }
    }

    return 0;
}

void displayMovies(int choice, RentableMovie rMovies[], InHouseMovie hMovies[], int rentCount, int houseCount) {
    switch(choice) {

        case 1:
            for (int i=0; i<rentCount; i++) {
                rMovies[i].displayMovie();
            }
            break;
        case 2:
            for (int i=0; i<houseCount; i++) {
                hMovies[i].displayMovie();
            }
            break;
        case 3:
            for (int i=0; i<rentCount; i++) {
                rMovies[i].displayMovie();
            }
            for (int i=0; i<houseCount; i++) {
                hMovies[i].displayMovie();
            }
            break;
    }
}

void addMovie(RentableMovie rentArray[], InHouseMovie houseArray[], int *rCount, int *hCount) {

    std::string movieType;
    std::string title;
    std::string director;
    int year;
    
    float price;
    int rentDuration;
    int yesOrNo;
    bool houseAvailability;

    while (true) {

        std::cout << "Is the movie Rentable or In-House?" << std::endl;
        std::cout << "1 - Rentable\n2 - In-House\n3 - Exit\nPlease enter your selection: ";
        getline(std::cin, movieType);

        if (movieType == "1") {
            if (*rCount == MAX_RENTABLE_MOVIES) {
                std::cout << "\n*** ERROR: Rentable Movie limit reached! ***\n" << std::endl;
                system("pause");
                break;
            }
            else {
                std::cout << "Enter Title (ie. Star Wars): ";
                getline(std::cin, title);
                std::cout << "Enter Director (ie. Stephen Spielberg): ";
                getline(std::cin, director);

                while (true) {

                    std::cout << "Enter Release Year (ie. 1998): ";
                    std::cin >> year;
                    
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear out whatever is in the buffer.
                        std::cout << "\n*** ERROR: Invalid entry! Please enter an integer value. ***\n" << std::endl;
                    }
                    else {
                        break;
                    }
                }

                
                while (true) {

                    std::cout << "Enter Rent Price (ie. 32.99): $";
                    std::cin >> price;
                    
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "\n*** ERROR: Invalid entry! Please enter a float value. ***\n" << std::endl;
                    }
                    else {
                        break;
                    }
                }

                while (true) {

                    std::cout << "Enter Rental Duration (in days): ";
                    std::cin >> rentDuration;
                    
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "\n*** ERROR: Invalid entry! Please enter an integer value. ***\n" << std::endl;
                    }
                    else {
                        break;
                    }
                }

                RentableMovie newRental(title, director, year, price, rentDuration);
                rentArray[*rCount] = newRental;
                (*rCount)++;
                
            }
            
        }
        else if (movieType == "2") {
            if (*hCount == MAX_IN_HOUSE_MOVIES) {
                std::cout << "\n*** ERROR: In-House Movie limit reached! ***\n" << std::endl;
                system("pause");
                break;
            }
            else {
                
                std::cout << "Enter Title (ie. Star Wars): ";
                getline(std::cin, title);
                std::cout << "Enter Director (ie. Stephen Spielberg): ";
                getline(std::cin, director);

                while (true) {

                    std::cout << "Enter Release Year (ie. 1998): ";
                    std::cin >> year;
                    
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear out whatever is in the buffer.
                        std::cout << "\n*** ERROR: Invalid entry! Please enter an integer value. ***\n" << std::endl;
                    }
                    else {
                        break;
                    }
                }

                
                while (true) {

                    std::cout << "Enter Purchase Price (ie. 32.99): $";
                    std::cin >> price;
                    
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "\n*** ERROR: Invalid entry! Please enter a float value. ***\n" << std::endl;
                    }
                    else {
                        break;
                    }
                }

                while (true) {
                    std::cout << "Is the movie currently available?\n1 - Yes\n2 - No\nPlease enter your selection: ";
                    std::cin >> yesOrNo;
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    
                    if (yesOrNo == 1) {
                        houseAvailability = true;
                        break;
                    }
                    else if (yesOrNo == 2) {
                        houseAvailability = false;
                        break;
                    }
                    else {
                        std::cout << "\n*** ERROR: Invalid entry, please select from one of the following options. ***\n" << std::endl;
                    }
                }

                InHouseMovie newInHouse(title, director, year, price, houseAvailability);
                houseArray[*hCount] = newInHouse;
                (*hCount)++;
            }
        }
        else if (movieType == "3") {
            break;
        }
        else {
            system("cls");
            std::cout << "\n*** ERROR: Invalid entry. ***\n" << std::endl;
            continue;
        }

        break;

    }

}