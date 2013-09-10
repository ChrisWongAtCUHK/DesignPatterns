package dp.state.sm;

public class ON extends State {
	
	// Constructor
	public ON(){
		super();
		System.out.println("   ON-constructor ");
	}
	
	public void off(Machine m){
		System.out.println("   going from ON to OFF");
		m.setCurrent(new OFF());
	}

}