package dp.adapter.after;

// The Adapter's "extra level of indirection" takes care of mapping a user-friendly common interface to 
// legacy-specific peculiar interfaces. 
public class AdapterDemo{
	public static void main(String[] args){
		Shape[] shapes = 
		{
			new Line(), new Rectangle(), new Triangle()
		};
		// A begin and end point from a graphical editor
		int x1 = 10, y1 = 20;
		int x2 = 30, y2 = 60;
		for (int i = 0; i < shapes.length; ++i)
		  shapes[i].draw(x1, y1, x2, y2);
	}
}