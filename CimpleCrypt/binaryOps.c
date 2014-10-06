// Keith Papa
// 10/4/2014

#define BIT_ONE 0x01
#define BIT_TWO 0x02
#define BIT_THREE 0x04
#define BIT_FOUR 0x08
#define BIT_FIVE 0x10
#define BIT_SIX 0x20
#define BIT_SEVEN 0x40
#define BIT_EIGHT 0x80


// gets the bit from least to most significant.
int getBitFromCharray(char **charray, int bit){

	int bitShift = bit % 8;
	int targetChar = sizeof(*charray) - 1 - (bit / 8);

	return  ((*charray[targetChar] >> bitShift) & 0x01);


}

void setBitToCharray(char **charray, int bit, int newBit){
	
	int bitShift = bit % 8;
	int targetChar = sizeof(*charray) - 1 - (bit / 8);

	switch (bitShift){
		case 0:
			*charray[targetChar] = ((*charray[targetChar] >> bitShift) & 0x01);
			break;
		case 1:
			break;
		case 3:

	}
	

}