package dp.adapter.squarepeg;

/* The NEW */
public class RoundHole{
	private int radius;
	public RoundHole(int r) {
	  radius = r;
	  System.out.format("RoundHole: max SquarePeg is %f%n", r * Math.sqrt(2));
	}
	public int getRadius() { return radius; }
}