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

//New bit has to be one or zero
void setBitToCharray(char **charray, int bit, int newBit){
	
	int bitShift = bit % 8;
	int targetChar = sizeof(*charray) - 1 - (bit / 8);

	switch (bitShift){
		case 0:
			//if our target bit is 1
			//if ((*charray[targetChar] & BIT_ONE) != 0){
			//	*charray[targetChar] = ((*charray[targetChar] >> bitShift) & 0x01);
			//}
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_ONE);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_ONE);
			break;
		case 1:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_TWO);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_TWO);
			break;
		case 2:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_THREE);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_THREE);
			break;
		case 3:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_FOUR);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_FOUR);
			break;
		case 4:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_FIVE);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_FIVE);
			break;
		case 5:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_SIX);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_SIX);
			break;
		case 6:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_SEVEN);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_SEVEN);
			break;
		case 7:
			if (newBit == 0){
				*charray[targetChar] = (*charray[targetChar] & !BIT_EIGHT);
				break;
			}
			*charray[targetChar] = (*charray[targetChar] | BIT_EIGHT);
			break;
			

	}
	

}