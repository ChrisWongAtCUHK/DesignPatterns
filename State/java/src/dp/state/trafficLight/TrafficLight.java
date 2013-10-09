package dp.state.trafficLight;

public class TrafficLight {
	private State current = new Red();
	
	void set(State state){
		this.current = state;
	}
	
	void change(){
		current.change(this);
	}
}