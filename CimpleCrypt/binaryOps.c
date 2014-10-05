// Keith Papa
// 10/4/2014




// gets the bit from least to most significant.
int getBitFromCharray(char **charray, int bit){

	int bitShift = bit % 8;
	int targetChar = sizeof(*charray) - 1 - (bit / 8);

	return  ((*charray[targetChar] >> bitShift) & 0x01);


}