#include "User.h"
class Subscriber : public User
{
private:
    string email;
    string password;
    const int college_ID;
    static int counter;

public:
    Subscriber(string Email = "New_User_()@eng-st.cu.eg.edu", string Pass = "0000");
    friend istream &operator>>(istream &input, Subscriber &ob);
    friend ostream &operator<<(ostream &otuput,const Subscriber &ob);
    Subscriber &operator=(const Subscriber &ob);
};
