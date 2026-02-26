/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Zariyah Omar 
 * ID: 202029002
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);

	int len = strlen(hex);

	for (int i = 0; i < len; i++) {
		char c = toupper(hex[i]);
		int value;

		if (c >= '0' && c <= '9') {
			value = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1; // Exit with an error code
		}

		decimal = decimal * 16 + value;
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}