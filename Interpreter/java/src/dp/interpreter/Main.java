package dp.interpreter;

public class Main{
	public static void main(String[] args) throws Exception{
		Node node = new Program();
		node.parse(new Context(args[0]));
		node.execute();
	}
}