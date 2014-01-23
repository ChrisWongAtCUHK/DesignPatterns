package dp.adapter.squarepeg;

// Design a "wrapper" class that can "impedance match" the old to the new
public class SquarePegAdapter{

	// The adapter/wrapper class "has a" instance of the legacy class
	private SquarePeg sp;

	public SquarePegAdapter(double w){ 
		sp = new SquarePeg(w); 
	}

	// Identify the desired interface
	public void makeFit(RoundHole rh){
		// The adapter/wrapper class delegates to the legacy object
		double amount = sp.getWidth() - rh.getRadius() * Math.sqrt(2);
		System.out.format("reducing SquarePeg %f by %f amount%n", sp.getWidth(), ((amount < 0) ? 0 : amount));
		if (amount > 0) {
			sp.setWidth(sp.getWidth() - amount);
			System.out.format("   width is now %f%n", sp.getWidth());
		}
	}
}