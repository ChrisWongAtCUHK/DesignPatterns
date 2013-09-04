#include "TimeImp.h"

TimeImp::TimeImp(int hr, int min) {
	hr_ = hr;
	min_ = min;
}

void TimeImp::tell() {
	cout << "time is " << setw(2) << setfill('0') << hr_ << min_ << endl;
}
