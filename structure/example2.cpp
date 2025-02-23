#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Movie {
    int id_movie;
    string title_movie;
    double price_movie;
    string description_movie;
    string categories_movie;
    string release_movie;
    string time_movie;
};

struct Ticket {
    int row;
    int column;
    string seat;
    string hall;
    int movie_id;
};

vector<Movie> movies;
vector<Ticket> tickets;

const int ROWS = 5;  
const int COLUMNS = 7;  

void addMovie() {
    Movie m;
    cout << "Enter movie ID: ";
    cin >> m.id_movie;
    cin.ignore();
    cout << "Enter title: ";
    getline(cin, m.title_movie);
    cout << "Enter price: ";
    cin >> m.price_movie;
    cin.ignore();
    cout << "Enter description: ";
    getline(cin, m.description_movie);
    cout << "Enter categories (comma separated): ";
    getline(cin, m.categories_movie);
    cout << "Enter release date (YYYY-MM-DD): ";
    cin >> m.release_movie;
    cout << "Enter showtime (HH:MM:SS): ";
    cin >> m.time_movie;

    movies.push_back(m);
    cout << "Movie added successfully!\n";
}

void showMovies() {
    if (movies.empty()) {
        cout << "No movies available.\n";
        return;
    }
    cout << "\nMovies Available:\n";
    cout << setw(5) << "ID" << setw(20) << "Title" << setw(10) << "Price" 
         << setw(30) << "Description" << setw(20) << "Categories" 
         << setw(15) << "Release Date" << setw(10) << "Time" << endl;

    for (const auto& m : movies) {
        cout << setw(5) << m.id_movie << setw(20) << m.title_movie << setw(10) << m.price_movie
             << setw(30) << m.description_movie << setw(20) << m.categories_movie
             << setw(15) << m.release_movie << setw(10) << m.time_movie << endl;
    }
}

bool isSeatBooked(int movie_id, int row, int column) {
    for (const auto& t : tickets) {
        if (t.movie_id == movie_id && t.row == row && t.column == column) {
            return true;
        }
    }
    return false;
}

void showSeats() {
    int movie_id;
    cout << "Enter movie ID to view seat availability: ";
    cin >> movie_id;

    cout << "\nSeat Availability for Movie ID " << movie_id << ":\n";
    cout << "Legend: [O] Available   [X] Booked\n\n";

    cout << "    ";
    for (int c = 1; c <= COLUMNS; ++c) {
        cout << setw(3) << c;
    }
    cout << "\n";

    for (int r = 1; r <= ROWS; ++r) {
        cout << setw(2) << r << "  ";
        for (int c = 1; c <= COLUMNS; ++c) {
            if (isSeatBooked(movie_id, r, c)) {
                cout << "[X]";
            } else {
                cout << "[O]";
            }
        }
        cout << "\n";
    }
}

void bookTicket() {
    int movie_id, row, column;
    cout << "Enter movie ID: ";
    cin >> movie_id;
    showSeats();

    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter column number: ";
    cin >> column;

    if (isSeatBooked(movie_id, row, column)) {
        cout << "Sorry, this seat is already booked. Please choose another seat.\n";
        return;
    }

    Ticket t;
    t.row = row;
    t.column = column;
    t.movie_id = movie_id;
    cout << "Enter seat number: ";
    cin.ignore();
    getline(cin, t.seat);
    cout << "Enter hall name: ";
    getline(cin, t.hall);

    tickets.push_back(t);
    cout << "Ticket booked successfully!\n";
}

void showTickets() {
    if (tickets.empty()) {
        cout << "No tickets booked yet.\n";
        return;
    }

    cout << "\nBooked Tickets:\n";
    cout << setw(10) << "Movie ID" << setw(10) << "Row" << setw(10) << "Column"
         << setw(15) << "Seat" << setw(15) << "Hall" << endl;

    for (const auto& t : tickets) {
        cout << setw(10) << t.movie_id << setw(10) << t.row << setw(10) << t.column
             << setw(15) << t.seat << setw(15) << t.hall << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nMovie Ticket Booking System\n";
        cout << "1. Add Movie\n";
        cout << "2. Show Movies\n";
        cout << "3. Show Seat Availability\n";
        cout << "4. Book Ticket\n";
        cout << "5. Show Booked Tickets\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addMovie(); break;
            case 2: showMovies(); break;
            case 3: showSeats(); break;
            case 4: bookTicket(); break;
            case 5: showTickets(); break;
            case 6: cout << "Exiting program...\n"; return 0;
            default: cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
