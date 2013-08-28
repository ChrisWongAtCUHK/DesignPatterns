package dp.adapter.demo;

import dp.adapter.execute.*;

public class ExecuteAdapterDemo{

	private static final String EXEC_PACKAGE = "dp.adapter.execute.";
	public static ExecuteInterface[] initialize(){
	
		ExecuteInterface[] array = new ExecuteInterface[4];
		array[0] = new ExecuteAdapter(EXEC_PACKAGE + "Chris", "goJogging");
		array[1] = new ExecuteAdapter(EXEC_PACKAGE + "Amby", "playCandyCrush");
		array[2] = new ExecuteAdapter(EXEC_PACKAGE + "Sammi", "hideInHome");
		array[3] = new ExecuteAdapter(EXEC_PACKAGE + "Hijack", "playDrum");
		return array;
	}
	
	public static void main(String[] args){
		ExecuteInterface[] objects = initialize();
		for(ExecuteInterface ei: objects){
			ei.execute();
		}
	}
}