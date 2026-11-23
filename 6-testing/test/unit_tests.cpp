#include <string>

void sum_adds_two_integers();
void multiply_multiplies_two_integers();

int main(int argc, char* argv[])
{
    if (argc < 2 || argv[1] == std::string{ "1" }) {
	sum_adds_two_integers();
    }
    if (argc < 2 || argv[1] == std::string{ "2" }) {
	multiply_multiplies_two_integers();
    }
}
