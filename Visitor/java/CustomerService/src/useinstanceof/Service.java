package useinstanceof;

/**
 * Service
 * Demontration of using instanceof keyword
 */
public class Service {
	public void doService(Customer customer) {
		customer.doCustomer();
		if(customer instanceof Member) {
			((Member) customer).doMember();
		}
		if(customer instanceof VIP) {
			((VIP) customer).doVIP();
		}
		customer.pay();
	}
}
