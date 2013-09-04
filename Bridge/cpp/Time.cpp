#include "Time.h"

Time::Time(){}

Time::Time(int hr, int min) {
	imp_ = new TimeImp(hr, min);
}

void Time::tell() {
	imp_->tell();
}
