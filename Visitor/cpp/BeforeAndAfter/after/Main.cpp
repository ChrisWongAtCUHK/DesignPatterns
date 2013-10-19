#include <iostream>

using namespace std;

class Color
{
	public:
		virtual void accept(class Visitor*) = 0;
};

class Red: public Color
{
	public:
		// virtual
		void accept(Visitor*);
		void eye(){
			cout << "Red::eye\n";
		}
};

class Blue: public Color
{
	public:
		// virtual
		void accept(Visitor*);
		void sky(){
			cout << "Blue::sky\n";
		}
};

class Visitor
{
	public:
		virtual void visit(Red*) = 0;
		virtual void visit(Blue*) = 0;
};

class CountVisitor: public Visitor
{
	public:
		CountVisitor(){
			m_num_red = m_num_blu = 0;
		}
		//virtual
		void visit(Red*){
			++m_num_red;
		}
		// virtual
		void visit(Blue*){
			++m_num_blu;
		}
		void report_num(){
			cout << "Reds " << m_num_red << ", Blues " << m_num_blu << '\n';
		}

	private:
		int m_num_red, m_num_blu;
};

class CallVisitor: public Visitor
{
	public:
		// virtual
		void visit(Red *r){
			r->eye();
		}
		// virtual
		void visit(Blue *b){
			b->sky();
		}
};

void Red::accept(Visitor *v){
	v->visit(this);
}

void Blue::accept(Visitor *v){
	v->visit(this);
}

int main(int argc, char *argv[]){
	Color *set[] = 
	{
		new Red, new Blue, new Blue, new Red, new Red, 0
	};
	CountVisitor count_operation;
	CallVisitor call_operation;
	for (int i = 0; set[i]; i++){
		set[i]->accept(&count_operation);
		set[i]->accept(&call_operation);
	}
	count_operation.report_num();

	return 0;
}
