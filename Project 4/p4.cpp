#include <iostream>
#include <cstring>
using namespace std;

	// TEMPLATE CLASS
template <class T> class AddElements {
public:
	T element;
	AddElements(T i) { element = i; }
	T add (T i) { return element + i; }
};

int main() {

	int TotalSize;
	cout << "How many inputs?" << endl;
	cin >> TotalSize;

	for (int i = 0; i < TotalSize; i++) {
		string var;
		cin >> var;
		if (var == "string") {
			string string1, string2;
			cin >> string1 >> string2;
			// Concatenation
			AddElements<string> main_string(string1);
			cout << main_string.add(string2) << endl;
		}
		else if (var == "int") {
			int int1, int2;
			cin >> int1 >> int2;
			AddElements<int> my_int(int1);
			cout << my_int.add(int2) << endl;
		}
		else if (var == "float") {
			double float1, float2;
			cin >> float1 >> float2;
			AddElements<double> float_family(float1);
			cout << float_family.add(float2) << endl;
		}

	}

	return 0;
}

