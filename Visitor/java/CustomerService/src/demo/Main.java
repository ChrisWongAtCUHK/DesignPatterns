package demo;

// http://openhome.cc/Gossip/DesignPattern/VisitorPattern.htm
/**
 * Main
 * Test program for the visitor pattern & using instanceof keyword.
 * No difference between two approaches.
 */
public class Main {
	/**
	 * main
	 * Demonsttration with full name of classes
	 */
    public static void main(String[] args) {
      
		if (System.getProperty("demotype") != null && System.getProperty("demotype").equalsIgnoreCase("useinstanceof")){
		    useinstanceof.Service service = new useinstanceof.Service();
			service.doService(new useinstanceof.Member());
			service.doService(new useinstanceof.VIP());
		} else if (System.getProperty("demotype") != null && System.getProperty("demotype").equalsIgnoreCase("visitor")){
			visitor.Service service = new visitor.Service();
			service.doService(new visitor.Member());
			service.doService(new visitor.VIP());
		}		
    }
}