package dp.state.sm;

public class Machine {
	State current;
	
	// Constructor
	public Machine(){
		current = new OFF();
		System.out.println();
	}
	
	public void setCurrent(State s){
		current = s;
	}
	
	public void on(){
		current.on(this);
	}
	
	public void off(){
		current.off(this);
	}
}