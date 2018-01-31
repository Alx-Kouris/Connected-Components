#include "reading.h"

using namespace std;

void readEdgeListFile(GraphDyn &grd, Graph &gr, const string &filename) {
	ifstream infile;
	infile.open(filename);
	uint16_t a, b;
	while (infile >> a >> b) {
		grd.addEdge(a, b);
		gr.addEdge(a, b);
	}
	infile.close();
}

void readGraphFile(GraphDyn &grd, Graph &gr, const string &filename) {
	ifstream infile;
	infile.open(filename);
	string line;
	uint16_t row = 0;
	while (getline(infile, line)) {
		istringstream ss(line);
		uint16_t num;
		while (ss >> num) {
			if (not row == 0){
				grd.addEdge(row, num);
				gr.addEdge(row, num);
			}
		}
		row++;
	}
	infile.close();
}

string getSuffix(string filename) {
	size_t suff_pos = filename.rfind('.');
	if (suff_pos == string::npos) {
		cout << "Could't find suffix of " << filename << std::endl;
		exit(-1);
	}
	return filename.substr(suff_pos);
}
