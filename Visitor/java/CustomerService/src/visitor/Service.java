package visitor;

/**
 * Service
 */
public class Service {
	private Visitor visitor = new VisitorImpl();
	public void doService(Customer customer) {
		customer.doCustomer();
		((Visitable) customer).accept(visitor);
		customer.pay();
	}
}
