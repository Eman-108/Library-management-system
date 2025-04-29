#include <iostream>
#include "Subscriber.h"
using namespace std;
int Subscriber::counter = 1;
Subscriber::Subscriber(string Email = "New_User_()@eng-st.cu.eg.edu", int Pass = rand() % (1000000000 - 100000001) + 100000001) : email(Email), password(Pass), college_ID(counter++)
{
}
istream &operator>>(istream &input, Subscriber &ob)
{
    cout << "Enter your name: ";
    getline(input,ob.name_);
    cout << "\nEnter your gender: ";
    input >> ob.gender_;
    cout << "\nEnter your age: ";
    input >> ob.age_;
    cout << "\nEnter your National ID: ";
    input >> ob.national_ID;
    cout << "\nEnter the balance you want to add: ";
    input >> ob.balance_;
    cout << "\nEnter your Email: ";
    input >> ob.email;
    cout << "\nEnter your password: ";
    input >> ob.password;
    return input;
}
ostream &operator<<(ostream &output, const Subscriber &ob)
{
    output << "Name: " << ob.name_ << "\nGender: " << ob.gender_ << "\nAge: " << ob.age_ << "\nNational ID: " << ob.national_ID << "\nBalance: " << ob.balance_ << "Date of Birth: " << ob.date_Of_Birth << "\n"
           << "Email: " << ob.email << "\nPassword: " << ob.password << "\nCollege ID: " << ob.college_ID << "\n";
    return output;
}
Subscriber::Subscriber(const Subscriber &ob) : email(ob.email), password(ob.password), college_ID(counter++)
{
}
Subscriber &Subscriber::operator=(const Subscriber &ob)
{
    if (this != &ob)
    {
        email = ob.email;
        password = ob.password;
    }
    return *this;
}
