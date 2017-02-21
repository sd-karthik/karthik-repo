#include <stdio.h>

int isBitPalindrome(int x) {
    int reversed = 0, aux = x;
    while (aux > 0) {
                    /* 
                       Taking LSB of aux and putting it as LSB of reversed
                       variable. Before doing that shifting reversed to 
                       right, to build it from left to right.
                    */
                     reversed = (reversed  << 1) | (aux & 1);

                    /*
                      Loop is depend of number of bits in aux. Taking next bit into 
                      LSB position by shifting aux toward right once.
                    */
                     aux = aux >> 1;
    }
    return (reversed  == x) ? 1 : 0;
}

int main(){
	if(isBitPalindrome(325)){
		printf("yes\n");
	}
	else
		printf("not\n");
}
		
