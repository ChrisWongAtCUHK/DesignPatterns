package visitor;

/**
 * VIP
 */
public class VIP extends Customer {
	void doVIP() {
		System.out.println("VIP service");
	}

	@Override
	public void accept(Visitor visitor) {
		visitor.visit(this); // seems to be polymorphism, actually overload
	}    
}
