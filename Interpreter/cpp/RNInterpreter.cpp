#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

class Thousand;
class Hundred;
class Ten;
class One;

// http://sourcemaking.com/design_patterns/interpreter/cpp/1
class RNInterpreter{
  public:
	// Constructor for client
    RNInterpreter();
	
	// Constructor for subclasses, avoids infinite loop
    RNInterpreter(int){}
    
	// interpret() for client
    int interpret(char*); 
	
	// Internal use
    virtual void interpret(char *input, int &total){
        // for internal use
        int index;
        index = 0;
        if (!strncmp(input, nine(), 2)){
            total += 9 * multiplier();
            index += 2;
        } else if (!strncmp(input, four(), 2)){
            total += 4 * multiplier();
            index += 2;
        } else{
            if (input[0] == five()){
				total += 5 * multiplier();
				index = 1;
            } else{
				index = 0;
			}
			for (int end = index + 3; index < end; index++){
				if (input[index] == one()){
					total += 1 * multiplier();
				} else{
					break;
				}
			}

        }
        strcpy(input, &(input[index]));
    } // remove leading chars processed
	
	protected:
		// cannot be pure virtual because client asks for instance
		virtual char one(){return '\0';}
		virtual char *four(){return '\0';}
		virtual char five(){return '\0';}
		virtual char *nine(){return '\0';}
		virtual int multiplier(){return 0;}
	
	private:
		RNInterpreter *thousands;
		RNInterpreter *hundreds;
		RNInterpreter *tens;
		RNInterpreter *ones;
};

class Thousand: public RNInterpreter{
	public:
		// Provide 1-arg constructor to avoid infinite loop in base class constructor
		Thousand(int): RNInterpreter(1){}
		
	protected:
		char one(){
			return 'M';
		}
		char *four(){
			return "";
		}
		char five(){
			return '\0';
		}
		char *nine(){
			return "";
		}
		int multiplier(){
			return 1000;
		}
};

class Hundred: public RNInterpreter{
	public:
		Hundred(int): RNInterpreter(1){}
		
	protected:
		char one(){
			return 'C';
		}
		char *four(){
			return "CD";
		}
		char five(){
			return 'D';
		}
		char *nine(){
			return "CM";
		}
		int multiplier(){
			return 100;
		}
};

class Ten: public RNInterpreter{
	public:
		Ten(int): RNInterpreter(1){}
		
	protected:
		char one(){
			return 'X';
		}
		char *four(){
			return "XL";
		}
		char five(){
			return 'L';
		}
		char *nine(){
			return "XC";
		}
		int multiplier(){
			return 10;
		}
};

class One: public RNInterpreter{
	public:
		One(int): RNInterpreter(1){}
		
	protected:
		char one(){
			return 'I';
		}
		char *four(){
			return "IV";
		}
		char five(){
			return 'V';
		}
		char *nine(){
			return "IX";
		}
		int multiplier(){
			return 1;
		}
};

RNInterpreter::RNInterpreter(){
	// use 1-arg ctor to avoid infinite loop
	thousands = new Thousand(1);
	hundreds = new Hundred(1);
	tens = new Ten(1);
	ones = new One(1);
}

int RNInterpreter::interpret(char *input){
	int total;
	total = 0;
	thousands->interpret(input, total);
	hundreds->interpret(input, total);
	tens->interpret(input, total);
	ones->interpret(input, total);
	if (strcmp(input, ""))
		// if input was invalid, return 0
		return 0;
	return total;
}

int main (int argc, char* args[]){
  RNInterpreter interpreter;
  char input[20];
  char input_lower[20];
  do{
	cout << "Enter Roman Numeral: ";
	cin >> input;
	for(unsigned int i = 0; i <= strlen(input); i++){
		input_lower[i] = tolower(input[i]);
	}
	
	// Exit command: "quit" or "exit" (case-insensitive)
	if(!strncmp(input_lower, "quit", strlen(input_lower)) || !strncmp(input_lower, "exit", strlen(input_lower)) ){
		break;
	}
	cout << "   interpretation is " << interpreter.interpret(input) << endl;
  } while(1);
  
  cout << "Chris Wong is handsome." << endl;
  return 0;
 
}
