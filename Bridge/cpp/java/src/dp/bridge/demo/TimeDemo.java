package dp.bridge.demo;

import dp.bridge.time.*;

public class TimeDemo {
	public static void main(String[] args){
		Time times[] = new Time[2];
		times[0] = new Time(9, 24);
		
		for(Time time: times){
			time.tell();
		}
	}
}