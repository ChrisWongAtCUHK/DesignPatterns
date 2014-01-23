package dp.adapter.after;

public class Line implements Shape{
    private LegacyLine adaptee = new LegacyLine();
	
	@Override
    public void draw(int x1, int y1, int x2, int y2){
        adaptee.draw(x1, y1, x2, y2);
    }
}