#include <iostream>
#include <fstream>
using namespace std;
int main()
 {
	fstream my_file;
	my_file.open("example.txt");
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file.close(); 
	}
	return 0;
}