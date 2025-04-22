class Author
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    string name_;
    int number_Of_Works;
    date date_of_birth;
    date date_of_death;

public:
    Author(string name = "Undefined", date dob = {0, 0, 0}, date dod = {0, 0, 0}, int numofWorks = 0);
    void info();
    void addWorks();
    friend istream &operator>>(istream &input, Author &ob);
    friend ostream &operator<<(ostream &otuput,const Author &ob);
    Author &operator=(const Author &ob);
};
