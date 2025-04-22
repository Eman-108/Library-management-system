#include "User.h";
#include "Author.h";
class Book
{
    string title_;
    string category_;
    string ISBN_;
    double average_Rating;
    double total_Rates;
    int number_Of_Rates;
    bool available_;
    User *Borrower;
    Author *books_Authors;

public:
    Book(string title = "Undefined", string category = "General", string ISBN = "###-#-##-######-#", double aveRating = 0, double totRates = 0, int numofRates = 0, bool available = true);
    string getTitle();
    bool isAvailable();
    void info();
    double getRate();
    void borrowBook();
    void returnBook();
    void rateBook(double x);
    friend istream &operator>>(istream &input, Book &ob);
    friend ostream &operator<<(ostream &otuput, const Book &ob);
    Book &operator=(const Book &ob);
};