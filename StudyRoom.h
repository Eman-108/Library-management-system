#include "User.h";
class StudyRoom
{
    bool available_;
    double hourly_rate;
    User* room_Users;

public:
    StudyRoom(bool available = true, double hourlyRate = 0);
    bool isAvailable();
    void bookRoom();
    void freeRoom();
    friend istream &operator>>(istream &input, StudyRoom &ob);
    friend ostream &operator<<(ostream &otuput, const StudyRoom &ob);
    StudyRoom &operator=(const StudyRoom &ob);
};