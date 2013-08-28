package dp.adapter.demo;

import dp.adapter.core.*;

public class RectangleAdapterDemo{

	public static void main(String[] args){
		Rectangle r = new RectangleAdapter(120, 200, 60, 40);
		r.draw();
	}
}