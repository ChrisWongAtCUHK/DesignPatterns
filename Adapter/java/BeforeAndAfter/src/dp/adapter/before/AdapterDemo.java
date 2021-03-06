package dp.adapter.before;

// Because the interface between Line and Rectangle objects is incapatible, 
// the user has to recover the type of each shape and manually supply the correct arguments. 
public class AdapterDemo{
	final static String LEGACY_PACKAGE = "dp.adapter.before";
    public static void main(String[] args){
        Object[] shapes = {
            new LegacyLine(), new LegacyRectangle(), new LegacyTriangle()
        };
        // A begin and end point from a graphical editor
        int x1 = 10, y1 = 20;
        int x2 = 30, y2 = 60;
        for (int i = 0; i < shapes.length; ++i){
			if(shapes[i].getClass().getName().equals(LEGACY_PACKAGE + ".LegacyLine")){
				((LegacyLine)shapes[i]).draw(x1, y1, x2, y2);
			} else if(shapes[i].getClass().getName().equals(LEGACY_PACKAGE + ".LegacyRectangle")){
				((LegacyRectangle)shapes[i]).draw(Math.min(x1, x2), Math.min(y1, y2)
				, Math.abs(x2 - x1), Math.abs(y2 - y1));
			} else if(shapes[i].getClass().getName().equals(LEGACY_PACKAGE + ".LegacyTriangle")){
				double hypotenuse = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2)); 
				((LegacyTriangle)shapes[i]).draw(x1, y1, hypotenuse);
			}
		}
    }
}