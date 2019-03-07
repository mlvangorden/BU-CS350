#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "helper.h"

using namespace std;

int main() {
	Helper h;
	h.generate_no_locality();
	cout << h;
}
