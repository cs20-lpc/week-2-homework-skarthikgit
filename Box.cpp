#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
	// TODO: Constructor
    	Box(const T &v) {
		value = v;
	}
	
	// TODO: setValue
	void setValue(T &in_val) {
		value = in_val;
	}

	// TODO: getValue
	T getValue() {
		return value;
	}

	// TODO: print
	void print() {
		std::cout << value << std::endl;
	}
	
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
