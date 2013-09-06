package dp.bridge.time;

public class Time {
	protected TimeImp imp;
	
	public Time(int hr, int min){
		this.imp = new TimeImp(hr, min);
	}
	
	public void tell(){
		this.imp.tell();
	}
}