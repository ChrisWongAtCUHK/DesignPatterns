package dp.adapter.after;

public class Triangle implements Shape{
	private LegacyTriangle adaptee = new LegacyTriangle();
	
	@Override
	public void draw(int x1, int y1, int x2, int y2){
		double hypotenuse = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2)); 
		adaptee.draw(x1, y1, hypotenuse);
	}
}