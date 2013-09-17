#include "Reader.h"

// parseInput()
void Reader::construct(PersistenceAttribute list[], int num){
	for (int i = 0; i < num; i++){
		switch(list[i].type){
			case File:
				_builder->configureFile(list[i].value);				// file converter
				break;
			case Queue:
				_builder->configureQueue(list[i].value);			// queue converter
				break;
			case Pathway:
				_builder->configurePathway(list[i].value);			// pathway converter
				break;
			default:
				break;
		}
	}
}