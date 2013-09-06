package dp.bridge.time;

public class CivilianTimeImp extends TimeImp {
	protected String whichM;
	
	public CivilianTimeImp(int hr, int min, int pm){
		super(hr, min);
		if(pm == 1){
			this.whichM = " PM";
		} else {
			this.whichM = " AM";
		}
	}
	
	public void tell(){
		System.out.println("time is " + this.hr + ":" + this.min + this.whichM);
	}
}