package demo;

/**
 * Main
 * Test program for the visitor pattern & using instanceof keyword.
 * No difference between two approaches.
 */
public class Main {
    public static void main(String[] args) {
      
		if (System.getProperty("demotype") != null && System.getProperty("demotype").equalsIgnoreCase("useinstanceof")){
		    useinstanceof.Service service = new useinstanceof.Service();
			service.doService(new useinstanceof.Member());
		} else if (System.getProperty("demotype") != null && System.getProperty("demotype").equalsIgnoreCase("visitor")){
			// TODO: visitor
		}		
    }
}