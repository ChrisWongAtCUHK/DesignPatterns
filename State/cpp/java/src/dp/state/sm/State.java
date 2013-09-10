package dp.state.sm;

public class State {
	// Constructor
	public State(){
	}
	
	public void on(Machine m){
		System.out.println("	alread ON\n");
	}
	
	public void off(Machine m){
		System.out.println("	alread OFF\n");
	}
}