#include "TimeImp.h"

#ifndef TIME_H
#define TIME_H

class Time {
  public:
    Time();
    Time(int , int );
    virtual void tell();
	
  protected:
    TimeImp *imp_;
};

#endif