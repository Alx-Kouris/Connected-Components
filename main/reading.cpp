#include <fstream>
#include <sstream>
#include "reading.h"

void readfile(GraphDyn &grd, Graph &gr, string el_name) {
	ifstream infile;
	infile.open(el_name);
	int a, b;
	while (infile >> a >> b) {
		grd.addEdge(a, b);
		gr.addEdge(a, b);
	}
	infile.close();
}

void readGraph(GraphDyn &grd, Graph &gr, string name) {
	ifstream infile;
	infile.open(name);
	string line;
	int row = 0;
	while (getline(infile, line)) {
		istringstream ss(line);
		int num;
		while (ss >> num) {
			grd.addEdge(row, num);
			gr.addEdge(row, num);
		}
		row++;
	}
	infile.close();
}

string GetSuffix(string filename) {
	size_t suff_pos = filename.rfind('.');
	if (suff_pos == string::npos) {
		cout << "Could't find suffix of " << filename << std::endl;
		exit(-1);
	}
	return filename.substr(suff_pos);
}
