package dp.interpreter.core;

public class Thousand extends RNInterpreter {
	// Provide 1-arg constructor to avoid infinite loop in base class constructor
	public Thousand(int number){
		super(1);
	}
	
	protected char one(){
		return 'M';
	}
	
	protected String four(){
		return "";
	}
	
	protected char five(){
		return '\0';
	}
	
	protected String nine(){
		return "";
	}
	
	protected int multiplier(){
		return 1000;
	}
}