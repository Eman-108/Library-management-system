#include "User.h"
class Subscriber : public User
{
private:
    string email;
    int password;
    const int college_ID;
    static int counter;

public:
    Subscriber(string Email = "New_User_()@eng-st.cu.eg.edu", int Pass = rand() % (1000000000 - 100000001) + 100000001);
    Subscriber(const Subscriber &ob);
    friend istream &operator>>(istream &input, Subscriber &ob);
    friend ostream &operator<<(ostream &output, const Subscriber &ob);
    Subscriber &operator=(const Subscriber &ob);
};
