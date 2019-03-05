#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <math.h>

using namespace std;

void readFromFile(char filename[]){
	int num = 0;
	char buffer[256];
	fstream outFile;
	outFile.open(filename, ios::in);
	while(!outFile.eof()){
		outFile.getline(buffer,256,'\n');
		//std::cout<<buffer<<endl;
		num++;
	}
	outFile.close();
	cout<< num  <<endl;
}


void bimodalBranchPredictor(char inputFile[], int m){
	char lineBuffer[256];
	char key[256];
	int predictorTable[4096];
	for(int i = 0; i < pow(2.0, m);i++){
		predictorTable[i] = 4;
	}
	fstream outStream;
	outStream.open(inputFile, ios::in);
	cout<< "hello world" << endl;
	while(!outStream.eof()){
		vector<string> res;
		string result;
		outStream.getline(lineBuffer, 256, '\n');
		stringstream input(lineBuffer);
		while(input >> result){
			res.push_back(result);
			cout<< res[1] << endl;
		}

	}

}

int main(int argc, char* argv[]){
	if(argc < 3){
		std::cout<< "need more input" << std::endl;
	}
	if(argc == 3){
		char filename1[100];
		char filename2[100];
		strcpy(filename1, argv[1]);
		strcpy(filename2, argv[2]);
		std::cout << filename1 << "-------"  << filename2 <<  "----------"  << argc << std::endl;
		readFromFile(filename1);
		bimodalBranchPredictor(filename1, 3);
	}

	return 0;
}
