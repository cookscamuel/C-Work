#include <iostream>
#include <string>
using namespace std;

const int MAX_MOVIES = 3;

void addMovie(string* movies, int* count, const string newMovie);
void printMovies(const string* movies, int count);

int main() {
    string movieList1[MAX_MOVIES];
    string movieList2[MAX_MOVIES];
    string userMovie;

    while (true) {
        cout << "Please Enter a Single-Word Movie Title for List 1: " << endl;
        cin >> userMovie;
        movieList1[*count] = userMovie;
        (*count)++;



    }

    return 0;
}



//     addMovie(movies, &movieCount, "Shawshank Redemption");
//     addMovie(movies, &movieCount, "Goodfellas");
//     addMovie(movies, &movieCount, "Raiders of the Lost Ark");

//     cout << "List of Movies:" << endl;
//     printMovies(movies, movieCount);

//     return 0;
// }

// void addMovie(string* movies, int* count, const string newMovie) {
//     if (*count < MAX_MOVIES) { 
//         movies[*count] = newMovie;
//         (*count)++;
//     }
// }

// void printMovies(const string* movies, int count) {
//     for (int i = 0; i < count; i++) {
//         cout << i + 1 << ". " << movies[i] << endl;
//     }
// }