# include <stdio.h>


void 
	addition(long long int number1, long long int number2) 
{
		long long int carry = 0;

		printf("addition of two numbers ==> %Ld\n", number1 + number2);

		while(number2 != 0) {
				carry = number1 & number2;
				number1 = number1 ^ number2;
				number2 = carry << 1;
		}

		
		printf("addition of two numbers ==> %Ld\n", number1 + number2);
		return ;
}

int main()

{
		
//	 	long long int number = 123456789101112;
//		long long int number1 = 123456789101112;

		long long int number = 1234567891011121314;

		printf("%Ld\n", number);
		/*
		addition(number , number1);
		printf("ADDITION ==> %Ld\n",number);
		printf("size ==> %d\n", sizeof(long long int));
		printf("number ==> %Ld\n", number1);*/
		return 0;
}
