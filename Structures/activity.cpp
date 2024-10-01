#include <iostream>
#include <String>

using namespace std;

struct Movie {
    string title;
    string director;
    int year;
    int rating;
    bool isAnimated;

    // function to print the information of the movie.
    void displayDetails() {
        cout << title << "\n" << director << "\n" << year << "\n" << rating << "\n";
        string result = (isAnimated == 1) ? "This is an animated movie." : "This is a live-action film.";
        cout << result;
    }

    // constructor
    Movie (string asTitle, string asDirector, int asYear, int asRating, bool asIsAnimated) {
        title=asTitle;
        director=asDirector;
        year=asYear;
        rating=asRating;
        isAnimated=asIsAnimated;
    }

};

// prototype for function
string displayMovieNamePointers(Movie* pointer);

string displayMovieNameReference(Movie &reference);

string displayMovieNameConst(const Movie &constReference);

int main() {

    // create 3 movie structs
    Movie m1 ("IT", "Andrés Muschietti", 2017, 90, false);

    Movie m2 ("The Shining", "Stanley Kubrick", 1980, 110, false);

    Movie m3("Inside Out 2", "Kelsey Mann", 2024, 85, true);


    m1.displayDetails();

    cout << "\n" << endl;

    m2.displayDetails();

    cout << "\n" << endl;

    m3.displayDetails();
    // utilize the displayDetails functions for each structure object.

    cout << "\n\n";

    // call the pointer function and print the result of the pointer function to the screen.
    cout << displayMovieNamePointers(&m1);

    cout << "\n\n";

    cout << displayMovieNameReference(m2);

    cout << "\n\n";

    cout << displayMovieNameConst(m3);

    return 0;
}

string displayMovieNamePointers(Movie* pointer) {
    cout << "This title was returned using the pointer function: ";
    return pointer->title;
}

string displayMovieNameReference(Movie &reference) {
    cout << "This title was returned using the reference function: ";
    reference.title="Goosebumps";
    return reference.title;
}

string displayMovieNameConst(const Movie &constReference) {
    cout << "This title was returned using the CONSTANT reference function: ";
    return constReference.title;
}
// this will prevent the ability to change values.

/*
    NOTES:
    If working with dynamic memory allocation, use pointers, else, use references.
*/