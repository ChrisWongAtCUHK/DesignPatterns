package visitor;

/**
 * Customer
 */
public class Customer implements Visitable {
	void doCustomer() {
		System.out.println("Customer Service");
	}
	void pay() {
		System.out.println("Check the bill");
	}
	public void accept(Visitor visitor) {
		// nothing to do
	}    
}
