package dp.adapter.rectangle;

// Legacy component
public class LegacyRectangle{
	private int x1, y1, x2, y2;
	
	// Constructor 
	public LegacyRectangle(int x1, int y1, int x2, int y2){
		this.x1 = x1;
		this.y1 = y1;
		this.x2 = x2;
		this.y2 = y2;
		System.out.println("LegacyRectangle: create. (" + this.x1 + "," + this.y1 + ") => (" + this.x2 + "," + this.y2 + ")");
	}
	
	public void oldDraw(){
		System.out.println("LegacyRectangle: oldDraw. (" + this.x1 + "," + this.y1 + ") => (" + this.x2 + "," + this.y2 + ")");
	}
}