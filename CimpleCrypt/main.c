#include <stdio.h>

int main()
{
	FILE *fileToEncrypt = fopen("C:\\test\\testtext", "rb");
	int fileFinished = 0;
	//char []
	char testMatrix[] = { 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
	char textKey[] = "";

	if (fileToEncrypt == NULL) {
		perror("Failed to open file \"myfile\"");
		getchar();
		return 0;
	}

	while (!fileFinished){
		char currentChar = fgetc(fileToEncrypt);
		if (currentChar == EOF) {
			fputs("\nAn error occurred while reading the file.\n", stderr);
			getchar();
			return 0;
		}
		printf("%c", currentChar);
	}

	/*fsetpos(fileToEncrypt, 0);
	while (!fileFinished){
		printf("I like turtles!");
	}*/

	getchar();
	return 1;
	
}

