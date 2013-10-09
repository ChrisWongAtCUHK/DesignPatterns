package dp.interpreter;

// <program> ::= PROGRAM <command list>
public class Program implements Node {
	private Node commandList;
	
	@Override
	public void parse(Context context){
		context.skipToken("PROGRAM");
		this.commandList = new CommandList();
		this.commandList.parse(context);
	}
	
	@Override
	public void execute(){
		this.commandList.execute();
	}
}