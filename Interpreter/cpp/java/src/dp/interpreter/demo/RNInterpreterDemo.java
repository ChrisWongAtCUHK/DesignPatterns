package dp.interpreter.demo;

import java.util.Scanner;
import dp.interpreter.core.*;

public class RNInterpreterDemo {

	// java version rewrite from cpp
	public static void main(String[] args){
		RNInterpreter interpreter = new RNInterpreter();
		String input = "";
		String inputLower;
		Scanner sc = new Scanner(System.in);
		do{
			System.out.println("Enter Roman Numeral: ");
			input = sc.next();
			if(input.toLowerCase().equals("quit") || input.toLowerCase().equals("exit")){
				break;
			}
			System.out.println("   interpretation is " + interpreter.interpret(input));
		} while(true);
		System.out.println("Chris Wong is handsome.");
	}
}