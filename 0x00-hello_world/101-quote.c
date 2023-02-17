#include <unistd.h>

int main(void)
{
	const char quote[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quote) - 1;
	ssize_t written = write(STDERR_FILRNO, quote,len);
	return (written == len) ? 1 : -1;
}
