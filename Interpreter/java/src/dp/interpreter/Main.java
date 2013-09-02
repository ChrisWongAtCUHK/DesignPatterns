package dp.interpreter;

public class Main{
	public static void main(String[] args) throws Exception{
		if(args.length < 1){
			System.out.println("Usage: " + System.getProperty("sun.java.command") + " filename");
			return;
		}
		Node node = new Program();
		node.parse(new Context(args[0]));
		node.execute();
	}
}