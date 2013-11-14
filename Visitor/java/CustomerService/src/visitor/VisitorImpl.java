package visitor;

/**
 * VisitorImpl
 */
public class VisitorImpl implements Visitor {
	public void visit(Member member) {
		member.doMember();
	}
	
	public void visit(VIP vip) {
		vip.doVIP();
	}
}
