#include <iostream>
#define a 1234

#ifdef ANSI_C_LIKE
#define A 110315245
#define C 12345
#else
#define A 2222222
#define C 1
#endif

#ifdef _cplusplus
#error A C++ compiler is required!
#endif


using namespace std;

int main() {

	cout << A;
	cin.get();
	return 0;
}