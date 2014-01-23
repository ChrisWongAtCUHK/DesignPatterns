import java.util.*;

// http://sourcemaking.com/design_patterns/command/java/1
/**
 * CommandQueue
 */
public class CommandQueue {

	/**
	 * Command
	 * To be implemented
	 */
	interface Command { 
		void execute(); 
	}

	/**
	 * DomesticEngineer
	 * Implement Command interface
	 */
	static class DomesticEngineer implements Command {
		// Concrete Command
		public void execute() {
			System.out.println( "take out the trash" );
		}  
	}

	/**
	 * Politician
	 * Implement Command interface
	 */
	static class Politician implements Command {
		// Concrete Command
		public void execute() {
			System.out.println( "take money from the rich, take votes from the poor" );
		}  
	}

	/**
	 * Programmer
	 * Implement Command interface
	 */
	static class Programmer implements Command {
		// Concrete Command
		public void execute() {
			System.out.println( "sell the bugs, charge extra for the fixes" );
		}  
	}
	
	/**
	 * Invoker
	 */
	public static List<Command> produceRequests() {
		List<Command> queue = new ArrayList<Command>();
		queue.add(new DomesticEngineer());
		queue.add(new Politician());
		queue.add(new Programmer());
		return queue;
	}

	/**
	 * Receiver
	 */
	public static void workOffRequests(List<Command> queue) {
		for (Iterator<Command> it = queue.iterator(); it.hasNext(); )
			((Command)it.next()).execute();
	}

	/**
	 * Client
	 */
	public static void main(String[] args) {
		List<Command> queue = produceRequests();
		workOffRequests(queue);
	}
}
