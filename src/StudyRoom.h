#include "User.h"
class StudyRoom
{
    bool available_;
    double hourly_rate;
    User* room_Users;

public:
    StudyRoom(bool available = true, double hourlyRate = 100);
    bool isAvailable();
    void bookRoom();
    void freeRoom();
    // friend istream &operator>>(istream &input, StudyRoom &ob);
    // friend ostream &operator<<(ostream &output, const StudyRoom &ob);
    // StudyRoom &operator=(const StudyRoom &ob);
};