#include <iostream>

using namespace std;

#ifndef TITAN_H
#define TITAN_H
class Titan
{
  public:
    Titan();
    void colossus();
    void armored();
    void female();
  
  private:
    int m_id;
    static int s_next;
};
#endif
