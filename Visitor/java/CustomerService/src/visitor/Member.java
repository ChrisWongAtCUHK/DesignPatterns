package visitor;

/**
 * Member
 */
public class Member extends Customer {
	void doMember() {
		System.out.println("Member service");
	}

	@Override
	public void accept(Visitor visitor) {
		visitor.visit(this); // seems to be polymorphism, actually overload
	}    
}
