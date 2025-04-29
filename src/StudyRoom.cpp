#include <iostream>
#include "StudyRoom.h"
StudyRoom ::StudyRoom(bool available = true, double hourlyRate = 100)
{
}
bool StudyRoom::isAvailable()
{
    return available_;
}
void StudyRoom::bookRoom()
{
    available_ = false;
}
void StudyRoom::freeRoom()
{
    available_ = true;
}