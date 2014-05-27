package dp.command;

public class BEffectCommand implements Command {
	public void execute(Drawing drawing) {
		System.out.println("作 B 特效");
		drawing.processOther();
		drawing.processAnother();
	}
}
