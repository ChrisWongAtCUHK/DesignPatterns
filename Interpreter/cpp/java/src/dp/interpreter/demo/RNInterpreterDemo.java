package dp.interpreter.demo;
import dp.interpreter.core.*;

public class RNInterpreterDemo {

	// java version rewrite from cpp
	public static void main(String[] args){
		RNInterpreter interpreter = new RNInterpreter();
		String input = "MMIII";
		String inputLower;
		
		System.out.println(interpreter.interpret(input));
	}
}