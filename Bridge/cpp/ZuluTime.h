#include "Time.h"
#include "ZuluTimeImp.h"

#ifndef ZULUTIME_H
#define ZULUTIME_H

class ZuluTime: public Time {
  public:
    ZuluTime(int, int, int);
};

#endif