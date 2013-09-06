package dp.bridge.time;

public class TimeImp {
	protected int hr, min;
	
	public TimeImp(int hr, int min){
		this.hr = hr;
		this.min = min;
	}
	
	public void tell(){
		System.out.println("time is " + String.format("%1$02d%2$02d", this.hr, this.min));
	}
}