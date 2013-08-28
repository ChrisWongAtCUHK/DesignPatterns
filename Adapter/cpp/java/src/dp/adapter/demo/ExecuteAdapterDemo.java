package dp.adapter.demo;

import dp.adapter.execute.*;

public class ExecuteAdapterDemo{

	public static ExecuteInterface[] initialize(){
		ExecuteInterface[] array = new ExecuteInterface[4];
		array[0] = new ExecuteAdapter(new Chris(), "goJogging");
		array[1] = new ExecuteAdapter(new Amby(), "playCandyCrush");
		array[2] = new ExecuteAdapter(new Sammi(), "hideInHome");
		array[3] = new ExecuteAdapter(new Hijack(), "playDrum");
		return array;
	}
	
	public static void main(String[] args){
		ExecuteInterface[] objects = initialize();
		for(ExecuteInterface ei: objects){
			ei.execute();
		}
	}
}