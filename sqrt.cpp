#include <iostream>
#include <vector>

using std::vector;

void sqrtn()
{
	// Fill array with 1000000 sorted number
	vector<int> v;
	int n = 1000 * 1000;
	for (int i = 0; i < n; ++i)
		v.push_back( rand() );
	sort(v.begin(), v.end());

	int m = sqrt(n);	// divide array to sqrt(n) blocks

	vector<int> min(m);
	vector<int> max(m);

	for (int i = 0; i < m; i += m) {	// for each block: we have sqrt n block
		// divide data to blocks of sqrt length

	}
}

int main(){
    sqrtn();
    return 0;
}