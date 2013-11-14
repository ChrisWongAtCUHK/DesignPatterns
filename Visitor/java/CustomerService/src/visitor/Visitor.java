package visitor;

/**
 * Visitor
 */
public interface Visitor {
	void visit(Member member);
	void visit(VIP vip);
}
