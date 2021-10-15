#include <iostream>
#include <string>

int ask_user_for_integer ( std :: string prompt ) {
	std :: cout << prompt;
	auto n = std :: string {};
	std :: getline ( std :: cin , n);
	return std :: stoi (n);
}

bool is_prime_number(int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	else {
		for (int i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

int main () {
	auto a = ask_user_for_integer ("a = ");
	std::cout << a << (is_prime_number(a) ? 
	" is a prime number" : " is not a prime number") << "\n";
	return 0;
}
