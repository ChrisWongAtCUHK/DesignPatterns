package dp.command;

public class CEffectCommand implements Command {
	public void execute(Drawing drawing) {
		System.out.println("作 C 特效");
		drawing.processOther();
		drawing.processSome();
		drawing.processAnother();
	}
}
