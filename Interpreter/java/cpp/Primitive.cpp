#include "Primitive.h"

// Constructor
Primitive::Primitive() {}

// Override
void Primitive::parse(Context context){
	name = context.currentToken;
	// Input context does not match any keywords
	if(name.compare("PRINT") && name.compare("BREAK") && name.compare("LINEBREAK") && name.compare("SPACE")) {
		cerr << "Undefined Command" << endl;
	}
	
	if(!name.compare("PRINT")){
		text = context.currentToken;
		context.nextToken();
	}
}

// Override
void Primitive::execute(){
	if(!name.compare("PRINT")){
		cout << text;
	} else if(!name.compare("SPACE")){
		cout << " " ;
	} else if(!name.compare("BREAK")){
		cout << endl;
	} else if(!name.compare("LINEBREAK")){
		cout << "\n------------------------------";
	}
}