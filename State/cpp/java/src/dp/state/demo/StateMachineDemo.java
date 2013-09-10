package dp.state.demo;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Scanner;

import dp.state.sm.*;

public class StateMachineDemo {
	public static void main(String[ ] args) throws java.util.InputMismatchException {
		Scanner scanner = new Scanner(System.in);
		int onOff = 0;
		
		try {
			// Get the class, IMPORTANT: getName()
			Class<?> c = Class.forName("dp.state.sm.Machine");
			
			// Create instance
			Object fsm = (Machine)c.newInstance();
			
			// Create methods with method name and parameters, http://stackoverflow.com/questions/17905177/non-varargs-call-of-varargs-method-with-inexact-argument-type-for-last-parameter
			Method[] methods = {c.getMethod("off", new Class[]{}), c.getMethod("on", new Class[]{})};
			while(true) {
				System.out.print("Enter 0/1:");
				onOff = scanner.nextInt();
				if(onOff != 0 && onOff != 1){
					break;
				}
				try {
					methods[onOff].invoke(fsm, new Object[]{});
				}catch (InvocationTargetException e) {
					// For invoke method
					e.printStackTrace();
				}
			} 
			
		} catch (ClassNotFoundException e) {
			// For Class.forName
			e.printStackTrace();
		} catch (InstantiationException e) {
			// For c.newInstance()
			e.printStackTrace();
		} catch (IllegalAccessException e){
			// For c.newInstance()
			e.printStackTrace();
		} catch (SecurityException e) {
			// TODO Auto-generated catch block
		e.printStackTrace();
		} catch (NoSuchMethodException e) {
			// For getMethod
		e.printStackTrace();
		} catch (IllegalArgumentException e) {
			// TODO Auto-generated catch block
		e.printStackTrace();
		}
			

		System.out.println("State Machine end.");
	}
}