package dp.bridge.demo;

import dp.bridge.time.*;

public class TimeDemo {
	// Main program
	public static void main(String[] args){
		Time times[] = new Time[3];
		times[0] = new Time(9, 24);
		times[1] = new CivilianTime(9, 24, 1);
		times[2] = new ZuluTime(9, 24, 6);
		
		for(Time time: times){
			time.tell();
		}
	}
}