package dp.bridge.time;

public class ZuluTime extends Time {
	
	public ZuluTime(int hr, int min, int zone){
		super(hr, min);
		this.imp = new ZuluTimeImp(hr, min, zone);
	}
}