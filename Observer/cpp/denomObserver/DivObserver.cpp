#include "DivObserver.h"

DivObserver::DivObserver(Subject *mod, int div): Observer(mod, div){}

void DivObserver::update() {
	// 6. "Pull" information of interest
	int v = getSubject()->getVal(), d = getDivisor();
	cout << v << " div " << d << " is " << v / d << '\n';
}

