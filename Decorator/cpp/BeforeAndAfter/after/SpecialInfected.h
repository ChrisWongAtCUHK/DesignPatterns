#include "ISpecialInfected.h"#ifndef SPECIALINFECTED_H#define SPECIALINFECTED_Hclass SpecialInfected: public ISpecialInfected{	public:		virtual ~SpecialInfected();		virtual void si_appear();		// virtual, core functionality};#endif