package dp.interpreter.core;

public class Ten extends RNInterpreter {
	// Provide 1-arg constructor to avoid infinite loop in base class constructor
	public Ten(int number){
		super(1);
	}
	
	protected char one(){
		return 'X';
	}
	
	protected String four(){
		return "XL";
	}
	
	protected char five(){
		return 'L';
	}
	
	protected String nine(){
		return "XC";
	}
	
	protected int multiplier(){
		return 10;
	}
}