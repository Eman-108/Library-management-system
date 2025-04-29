#include <iostream>
#include "User.h"
using namespace std;

User::User(string name = "New User", string gender = "N/A", int age = 0, string nationalID = "0", double balance = 0, string DOB = "DD/MM/YYYY") : name_(name), gender_(gender), age_(age), national_ID(nationalID), balance_(balance)
{
    date_Of_Birth = string() + nationalID[5] + nationalID[6] + '/' + nationalID[3] + nationalID[4] + '/';
    if (nationalID[0] == '2')
        date_Of_Birth += "19";
    else if (nationalID[0] == '3')
        date_Of_Birth += "20";
    date_Of_Birth += string() + nationalID[1] + nationalID[2];
}
// 
// 10/08/2008
// istream &operator>>(istream &input, User &ob)
// {
//     input >> ob.name_ >> ob.gender_ >> ob.age_ >> ob.national_ID >> ob.balance_;
//     return input;
// }
// ostream &operator<<(ostream &output, const User &ob)
// {

//     output << "Name: " << ob.name_ << "\nGender: " << ob.gender_ << "\nAge: " << ob.age_ << "\nNational ID: " << ob.national_ID << "\nBalance: " << ob.balance_ << "Date of Birth: " << ob.date_Of_Birth << "\n";
//     return output;
// }
User &User::operator=(const User &ob)
{
    if (this != &ob)
    {
        name_ = ob.name_;
        age_ = ob.age_;
        gender_ = ob.gender_;
        balance_ = ob.balance_;
        national_ID = ob.national_ID;
    }
    return *this;
}
string User::getName()
{
    return name_;
}
void User::info()
{
    cout << "Name: " << name_ << "\nGender: " << gender_ << "\nAge: " << age_ << "\nNational ID: " << national_ID << "\nBalance: " << balance_ << "Date of Birth: " << date_Of_Birth << "\n";
}
void User::addBalance(int x)
{
    balance_ += x;
}
void User::deductBalance(int x)
{
    balance_ -= x;
}
double User::getBalance()
{
    return balance_;
}