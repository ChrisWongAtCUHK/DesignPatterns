package dp.interpreter.core;

public class RNInterpreter {

	private RNInterpreter thousands;
	private RNInterpreter hundreds;
	private	RNInterpreter tens;
	private	RNInterpreter ones;
	
	protected char one(){return '\0';}
	protected String four(){return "";}
	protected char five(){return '\0';}
	protected String nine(){return "";}
	protected int multiplier(){return 0;}
		
	// Constructor for client
	public RNInterpreter(){
		this.thousands = new Thousand(1);
		this.hundreds = new Hundred(1);
		this.tens = new Ten(1);
		this.ones = new One(1);
	}

	// Constructor for subclasses, avoids infinite loop
	public RNInterpreter(int number){
		
	}	
	
	// interpret() for client
	public int interpret(String input){
		int total = 0;
		InterpretPair interpretPair = new InterpretPair();
		
		// Thousands
		interpretPair = this.thousands.interpret(input, total);
		input = interpretPair.getInput();
		total = interpretPair.getTotal();
		
		// If the input is removed entirely
		if (input.equals("")){
			return total;
		}
		
		// Hundreds
		interpretPair = this.hundreds.interpret(input, total);
		input = interpretPair.getInput();
		total = interpretPair.getTotal();
		
		// If the input is removed entirely
		if (input.equals("")){
		System.out.println("Stop at hundreds.");
			return total;
		}
		
		// Tens
		interpretPair = this.tens.interpret(input, total);
		input = interpretPair.getInput();
		total = interpretPair.getTotal();
		
		// If the input is removed entirely
		if (input.equals("")){
			return total;
		}
		
		// Ones
		interpretPair = this.ones.interpret(input, total);
		input = interpretPair.getInput();
		total = interpretPair.getTotal();
		
		return total;
	}
	
	// Remove leading chars processed
	protected InterpretPair interpret(String input, int total){
	
		InterpretPair interpretPair = new InterpretPair();
		// for internal use
        int index = 0;
		if(input.equals(nine())){
            total += 9 * multiplier();
            index += 2;
        } else if(input.equals(four())){
            total += 4 * multiplier();
            index += 2;
        } else {
			if(input.charAt(0) == five()){
				total += 5 * multiplier();
				index = 1;
			} else {
				index = 0;
			}
			
			for(int end = index + 3; index < end; index++){
				if(index >= input.length()){
					break;
				}
				if(input.charAt(index) == one()){
					total += 1 * multiplier();
				} else {
					break;
				}
			}
		}
		
		if(index != 0){
			interpretPair.setInput(input.substring(index));
		}
		interpretPair.setTotal(total);
		return interpretPair;
	}
}