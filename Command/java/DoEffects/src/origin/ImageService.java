package origin;
public class ImageService {
	private Drawing drawing = new Drawing();
	void doAEffect() {
		System.out.println("作 A 特效");
		drawing.processSome();
		drawing.processOther();
	}
	void doBEffect() {
		System.out.println("作 B 特效");
		drawing.processOther();
		drawing.processAnother();
	}
}
