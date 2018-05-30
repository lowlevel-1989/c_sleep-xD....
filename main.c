#include <stdio.h>
#include <unistd.h>

int main(void) {
	char name[4096];
	sprintf(name, "vinicio jose");
	printf("name: %s\n", name);
	sleep(30);
	sprintf(name, "vinicio");
	printf("name: %s\n", name);
	return 0;
}
