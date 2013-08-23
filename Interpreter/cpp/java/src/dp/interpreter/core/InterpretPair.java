package dp.interpreter.core;

// To handle the return value of String and int in interpret(String input, int total)
public class InterpretPair {
	private String input;
	int total;
	
	// Constructor
	public InterpretPair(){
		// dummy value
		this.input = "";
		this.total = 0;
	}
	
	public void setInput(String input){
		this.input = input;
	}
	
	public String getInput(){
		return this.input;
	}
	
	public void setTotal(int total){
		this.total = total;
	}
	
	public int getTotal(){
		return this.total;
	}
		
}