package dp.command;

public class AEffectCommand implements Command {
	public void execute(Drawing drawing) {
		System.out.println("作 A 特效");
		drawing.processSome();
		drawing.processOther();
	}
}
