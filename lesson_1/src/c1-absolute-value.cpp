#include <iostream>
#include <string>


int ask_user_for_integer ()
{
std :: cout << " int :";
auto n = std :: string {};
std :: getline ( std :: cin , n);
return std :: stoi (n);
}

int main ()
{
auto const a = ask_user_for_integer ();
if (a < 0) {
	std :: cout << a * (-1) << "\n";
} else {
	std :: cout << a << "\n";
}

return 0;
}

