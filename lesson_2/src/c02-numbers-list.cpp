#include <iostream>
#include <string>

int ask_user_for_integer ( std :: string prompt ) {
	std :: cout << prompt;
	auto n = std :: string {};
	std :: getline ( std :: cin , n);
	return std :: stoi (n);
}

int compare( int first, int second) {
	if (first < second) {
		return -1;
	} else if (first > second) {
		return 1;
	} 
	return 0;
}

bool is_devidable_by(int a, int c) {
	return a % c == 0;
}

void swap(int a, int b) {
	int buff = a;
	a = b;
	b = buff;
}

int main () {
	auto a = ask_user_for_integer ("a = ");
	auto b = ask_user_for_integer ("b = ");
	auto c = ask_user_for_integer ("c = ");
	auto buff = 0;

	if(compare(a, b) == 1) {
		buff = a;
		a = b;
		b = buff;
	}

	for(int i = a; i < b; i++) {
		if(is_devidable_by(i, c)) {
			std::cout << i << " ";
		}
	}
	
	std::cout << "\n";
	return 0;
}
