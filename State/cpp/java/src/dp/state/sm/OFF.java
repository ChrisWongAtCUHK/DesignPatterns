package dp.state.sm;

public class OFF extends State {
	
	// Constructor
	public OFF(){
		super();
		System.out.println("   OFF-constructor ");
	}
	
	public void on(Machine m){
		System.out.println("   going from OFF to ON");
		m.setCurrent(new ON());
	}

}