#include<stdio.h>

extern int showbit(int num);

int cnt_leading_set_bits( int num );
int cnt_leading_cleared_bits( int num );
int cnt_trailing_cleared_bits (int num);
int cnt_trailing_set_bits(int num);

int main()

{

	int num, count;

	printf("enter a number");
	scanf(" %d",& num);

	printf("the number is:");

	showbit( num );

	count = cnt_leading_set_bits ( num );
	printf("\n the count of leading set bits %d \n", count);

	count = cnt_leading_cleared_bits(num);
	printf("\n the count of leading clear bits %d \n",count);

	count = cnt_trailing_cleared_bits(num);
	printf("\n the count of trailing clear bits %d \n",count);

	count =  cnt_trailing_set_bits(num);
	printf("\n the count of trailing set bits %d \n", count);

	return 0; }

int cnt_leading_set_bits(int num)

{
	int i, count = 0;

	for( i=31; i>=0; i-- ){
		if(( num >> i ) & 1 )
			count ++;
		else 
			break;
	}
	return count;

}

int cnt_leading_cleared_bits(int num)

{
	int i, count=0;
	for(i=31;i>0;i--){
		if((num>>i)&1)
			break;
		else
			count++;
	}

	return count;


}

int cnt_trailing_cleared_bits(int num)
{
	int i, count=0;
	for(i=0;1<=31;i++)
	{
		if((num>>i)&1)
			break;
		else
			count++;
	}
	return count;
}

int cnt_trailing_set_bits(int num)

{

	int i;
	int count = 0;

	for(i=0;i<=31;i++)
	{
		if(( num >> i ) & 1 )
			count ++;
		else
			break;
	}
	return count;
}









