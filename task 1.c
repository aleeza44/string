#include<stdio.h>
#include<string.h>

void compressString(char *str) {
	int length = strlen(str);
	if (length == 0) {
		return;
	}
	int count = 1;
	for (int i = 1; i < length; i++) {
		if (i + 1 < length && str[i] == str[i + 1]) {
			count++;
		}
		else {
			printf("%d%c", count, str[i]);
			count = 1;
		}
	}
}
int main() {
	char str[100];
	printf("Enter a string (in lowercase letters):");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Compressed string; ");
	compressString(str);
	return 0;
}