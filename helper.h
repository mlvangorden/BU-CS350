#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

class Helper {
	public:
		Helper();
		Helper(unsigned int pages, unsigned int accesses);
		~Helper();
		unsigned int getNumPages(); //getter for uint pages
		unsigned int getNumAccesses(); //getter for uint accesses
		void generate_no_locality(); //100 unique pages, 10000 accesses random workload
		void generate_e_t(); //
		void generate_looping(); //(simulates normal loop??)
		
		vector<unsigned int> getNL_R();
		vector<unsigned int> getET_R();
		vector<unsigned int> getLP_R();
		friend ostream& operator<<(ostream& os, Helper h);
	private:
		unsigned int pages;
		unsigned int accesses;
		//vector for push/pop
		vector<unsigned int> no_locality_res;
		vector<unsigned int> e_t_res;
		vector<unsigned int> loop_res;
};
