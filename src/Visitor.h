#include "User.h"
class Visitor : public User
{
public:
    void subscribe();
    friend istream &operator>>(istream &input, Visitor &ob);
    friend ostream &operator<<(ostream &otuput, const Visitor &ob);
    Visitor &operator=(const Visitor &ob);
};