#include <stdio.h>

void encrypeWithDES(FILE *plainText, FILE *cipherText){
	
	//The super dooper magical key!
	char key[7];

	//The various blocks.
	char currentBlock[8];
	char currentLeftBlock[4];
	char currentRightBlock[4];
	char nextLeftBlock[4];
	char nextRightBlock[4];

	//#iterationthings
	int encrypting = 1;

	//Checks to make sure that our plaintext file is valid
	if (plainText == NULL) {
		perror("Failed to open file \"myfile\"");
		getchar();
		return;
	}
	while (encrypting){
		//Begins by getting the first encryption block
		for (int i = 0; i < 7; i++){
			char currentChar = fgetc(plainText);
			
			//Checks to see if we have reached the end of file.
			if (currentChar == EOF) {
				fputs("\nAn error occurred while reading the file.\n", stderr);
				getchar();
				return;
			}
			else{
				currentBlock[i] = currentChar;
			}
			printf("%c", currentChar);
		}
		//Finished populating block

		//splits our current block into two the left and right block
		for (int i = 0; i < 3; i++){
			currentLeftBlock[i] = currentBlock[i];
			currentRightBlock[i] = currentBlock[i + 3];
		}

		//Begins the actuall encrypting process, 
		for (int i = 0; i < 15; i++){

		}
	}
}

void decryptWithDES(FILE *plainText, FILE *cipherText){
	return;
}

char *theFuntion(char *block, char *subKey){
	
	//expander
}

