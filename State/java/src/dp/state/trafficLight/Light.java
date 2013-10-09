package dp.state.trafficLight;

public abstract class Light implements State{
	public abstract void change(TrafficLight light);
	
	protected void sleep(int millisecond){
		try {
			Thread.sleep(millisecond);
		} catch(InterruptedException e){
			e.printStackTrace();
		}
	}
}