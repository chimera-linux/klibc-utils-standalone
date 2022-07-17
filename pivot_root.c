/* Change the root file system */

/* Written 2000 by Werner Almesberger */

#include <stdio.h>
#include <sys/mount.h>
#include <sys/syscall.h> /* klibc-utils-standalone */
#include <unistd.h> /* klibc-utils-standalone */

int main(int argc, const char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "Usage: %s new_root put_old\n", argv[0]);
		return 1;
	}
	/* klibc-utils-standalone: made into syscall */
	if (syscall(SYS_pivot_root, argv[1], argv[2]) < 0) {
		perror("pivot_root");
		return 1;
	}
	return 0;
}
