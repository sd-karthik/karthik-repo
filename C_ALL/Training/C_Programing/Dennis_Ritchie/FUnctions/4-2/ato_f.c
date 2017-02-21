
/*#define IS_DIGIT(num) if(num >= '0' && num <= '9') \

						num = num - '0';
*/

#define AT0I(str) num = num * 10 + str - '0'
#define SIGN(str) if(str == '-'){ sign = -1; i++;}\
					else if( str == '+'){ sign = 1;  i++;}

double ato_f(char *str)
{ 
	double num = 0;
	char sign = 1;
	int i = 0;
	int power = 1;
	int mul = 1;

/*	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
	{
		i++;
	}
*/	
	SIGN(str[i]);

	for(; is_digit(str[i]); i++)
	{
		AT0I(str[i]);
	}
	
	if(str[i] == '.')
	{
		i++;
	}
	else{
		printf("Invalid number\n");
		exit(0);
	}

	for(; is_digit(str[i]); i++)
	{
		AT0I(str[i]);
		mul = mul * 10;	
	}
	num = sign * num / mul;

	if(str[i] == 'e' || str[i] == 'E')
	{
		i++;
	}
	else {
		printf("Invalid float extension\n");
		exit(0);
	}

	sign = 1;
	SIGN(str[i])

	for(; is_digit(str[i]); i++)
	{
		power = power * pow(10, (str[i] - '0'));
	}
	
	if(str[i] == '.')
	{
		i++;
	}
	else{
		printf("Invalid number\n");
		exit(0);
		
	if(sign == '-')
		return sign*num*power;
	else
		return num/power;
	}
}	
