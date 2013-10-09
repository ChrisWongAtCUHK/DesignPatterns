package dp.memento.backup;

import java.util.*;

public class Main{
	public static void main(String[] args){
		Application application = new Application();
		Recovery recovery = new Recovery();
		
		System.out.println(application.getState());
		
		Backup backup = application.backup();			// build Memento
		recovery.add(backup);							// add Memento
		
		// Change state
		application.setState("customer setting");
		System.out.println(application.getState());
		
		Date date = backup.getDate();					// assume date is the date set by user to recover
		application.recover(recovery.retrieve(date));	// recover Memento
		System.out.println(application.getState());
	}
}