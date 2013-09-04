#include "TimeImp.h"

#ifndef ZULUTIMEIMP_H
#define ZULUTIMEIMP_H

class ZuluTimeImp: public TimeImp {
  public:
    ZuluTimeImp(int , int , int );

    /* virtual */
    void tell();
  protected:
    char zone_[30];
};

#endif