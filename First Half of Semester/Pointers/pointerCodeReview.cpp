#include <iostream>
#include <string>
using namespace std;

const int MAX_MOVIES = 100;
// declare the global constant integer called MAX_MOVIES with a value of 100.

void addMovie(string* movies, int* count, const string newMovie);
void printMovies(const string* movies, int count);
// these statements are prototyping the functions for addMovie and printMovies.

int main() {
    string movies[MAX_MOVIES]; // this declares the array variable movies and limits the size of the array to 100 indexes.
    int movieCount = 0; // this declares the integer variable movieCount and sets the value to 0.
    // this basically tells the main to watch out for these functions ahead of time.

    addMovie(movies, &movieCount, "Shawshank Redemption"); // these are calling the addMovie function and adding the string supplied to the movies array
    addMovie(movies, &movieCount, "Goodfellas");
    addMovie(movies, &movieCount, "Raiders of the Lost Ark");
    addMovie(movies, &movieCount, "Raiders of the Lost Ark 2");
    // these statements add Strings containing movie titles to the movies list.

    // print the list of movies using the printMovies function.
    cout << "List of Movies:" << endl;
    printMovies(movies, movieCount);

    return 0;
}

void addMovie(string* movies, int* count, const string newMovie) { // this is a void function that takes 
    if (*count < MAX_MOVIES) { 
        movies[*count] = newMovie; // add new movie to the array
        (*count)++; // increment the count, increases the memory address to reference the next spot.
    }
}

void printMovies(const string* movies, int count) {
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << movies[i] << endl;
    }
}