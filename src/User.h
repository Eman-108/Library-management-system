using namespace std;
class User
{
protected:
    string name_;
    string gender_;
    int age_;
    string national_ID;
    double balance_;
    string date_Of_Birth;

public:
    User(string name = "New User", string gender = "N/A", int age = 0, string nationalID = "0", double balance = 0, string DOB = "DD/MM/YYYY");
    friend istream &operator>>(istream &input, User &ob);
    friend ostream &operator<<(ostream &output, const User &ob);
    User &operator=(const User &ob);
    string getName();
    void info();
    void addBalance(int x);
    void deductBalance(int x);
    double getBalance();
};