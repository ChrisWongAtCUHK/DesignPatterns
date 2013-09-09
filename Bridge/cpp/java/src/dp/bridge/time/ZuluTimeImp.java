package dp.bridge.time;

public class ZuluTimeImp extends TimeImp {
	protected String zoneStr;
	
	public ZuluTimeImp(int hr, int min, int zone){
		super(hr, min);
		if(zone == 5){
			this.zoneStr = " Eastern Standard Time";
		} else if(zone == 6){
			this.zoneStr = " Central Standard Time";
		}
	}
	
	public void tell(){
		System.out.println("time is " + this.hr + ":" + this.min + this.zoneStr);
	}
}