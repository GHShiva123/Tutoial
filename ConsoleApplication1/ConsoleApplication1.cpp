
#include <conio.h>

void print(const char* s) {
	for (;s != 0; s++) {
		_putch(*s);
	}
}

int main()
{
	const char text[5] = {'E', 'x', 'i', 't', 0};
	print(text);
	while (!_kbhit());
	return 0;
}

