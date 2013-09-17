#include "Builder.h"

enum PersistenceType
{
	File, Queue, Pathway
};

struct PersistenceAttribute
{
	PersistenceType type;
	char value[30];
};

#ifndef READER_H
#define READER_H
// parser
class Reader
{
	public:
		void setBuilder(Builder *b){
			_builder = b;
		}
		void construct(PersistenceAttribute[], int);
	private:
		Builder *_builder;
};
#endif