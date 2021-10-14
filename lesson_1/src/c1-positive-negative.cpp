#include <iostream>
#include <string>


int ask_user_for_integer (std :: string prompt)
{
std :: cout << prompt << " int :";
auto n = std :: string {};
std :: getline ( std :: cin , n);
return std :: stoi (n);
}

int main ()
{
auto const a = ask_user_for_integer ("");
if (a < 0) {
	std :: cout << -1 << "\n";
} else if (a > 0) {
	std :: cout << 1 << "\n";
} else if (a == 0) {
	std :: cout << 0 << "\n";
}

return 0;
}

