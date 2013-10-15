#include <iostream>

using namespace std;

class Image
{
	int m_id;
	static int s_next;
	public:
		// constructor
		Image(){
			m_id = s_next++;
			cout << "   $$ ctor: " << m_id << '\n';
		}
		// destructor
		~Image(){
			cout << "   dtor: " << m_id << '\n';
		}
		void draw(){
			cout << "   drawing image " << m_id << '\n';
		}
};
int Image::s_next = 1;

int main(int argc, char *argv[]){
	cout << "A" << endl;
	Image images[5];
	cout << "B" << endl;
	int i;
	while(true){
		cout << "Exit[0], Image[1-5]: ";
		cin >> i;
		if (i == 0)
			break;
		images[i - 1].draw();
	}

	return 0;
}
