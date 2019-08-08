a#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string filename;
	string extension;
	cout << "Enter file name"; 
	cin >> filename;
	cout << "Enter the Extension";
	cin >> extension;
	filename = filename + extension;

	ofstream myfile;
	myfile.open(filename.c_str(), std::ios_base::app);
	myfile << "\nWriting this to nd a file.\n";
	myfile << "000" << filename;
	myfile.close();
	return 0;
}
