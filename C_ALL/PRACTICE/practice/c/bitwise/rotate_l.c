# include <stdio.h>
int rotate_bit(int , int ,int );
int size();
int main()
{
		int num = 23;
		int dir = 2;
		int nbit = 5;
		int n, i;
		n =  rotate_bit(num, nbit, dir); 
		for(i = 31 ; i>=0; --i) {
				if(n & (1 << i))
						printf("1");
				else 
						printf("0");
				if(i%8 == 0) 
				printf(" ");
		}
		printf("\n");
		return 0;

}
int rotate_bit(int num, int nbit, int dir)
{
		return dir ? (((unsigned)num >> nbit)|(num<<size() - nbit)):(num<<nbit)
				|((unsigned)num >> (size() -nbit));
}

int size()
{
		int s = 1;
		unsigned var = (unsigned)~0;
		for(; (var >>= 1); ++s);
		return s;
}
