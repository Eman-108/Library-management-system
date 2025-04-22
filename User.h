class User
{
protected:
    string name_;
    string gender_;
    int age_;
    int national_ID;
    double balance_;

public:
    User(string name = "New User", string gender = "N/A", int age = 0, int nationalID = 0, double balance = 0);
    friend istream &operator>>(istream &input, User &ob);
    friend ostream &operator<<(ostream &otuput,const User &ob);
    User &operator=(const User &ob);
    string getName();
    void info();
    void addBalance(int x);
    void deductBalance(int x);
    double getBalance();
};