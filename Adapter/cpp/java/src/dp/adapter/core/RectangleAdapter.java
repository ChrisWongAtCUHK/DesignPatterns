package dp.adapter.core;

// Adapter wrapper
public class RectangleAdapter extends LegacyRectangle implements Rectangle{
	
	// Constructor
	public RectangleAdapter(int x, int y, int width, int height){
		super(x, y, x + width, y + height);
		System.out.println("RectangleAdapter: create. (" + x + "," + y + "), width = " + width + ", height = " + height);
	}
	
	//@Override
	public void draw(){
		System.out.println("RectangleAdapter: draw.");
		this.oldDraw();
	}
}