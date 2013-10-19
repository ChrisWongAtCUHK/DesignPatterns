#include <iostream>

using namespace std;

// The interface for "operations" are specified in the Color base class and implemented in the Color derived classes.
class Color
{
	public:
		virtual void count() = 0;
		virtual void call() = 0;
		static void report_num(){
			cout << "Reds " << s_num_red << ", Blues " << s_num_blu << '\n';
		}
	protected:
		static int s_num_red, s_num_blu;
};
int Color::s_num_red = 0;
int Color::s_num_blu = 0;

class Red: public Color
{
	public:
		void count(){
			++s_num_red;
		}
		void call(){
			eye();
		}
		void eye(){
			cout << "Red::eye\n";
		}
};

class Blue: public Color
{
	public:
		void count(){
			++s_num_blu;
		}
		void call(){
			sky();
		}
		void sky(){
			cout << "Blue::sky\n";
		}
};

int main(int argc, char *argv[]){
	Color *set[] = 
	{
		new Red, new Blue, new Blue, new Red, new Red, 0
	};
	for (int i = 0; set[i]; ++i){
		set[i]->count();
		set[i]->call();
	}
	Color::report_num();

	return 0;
}
