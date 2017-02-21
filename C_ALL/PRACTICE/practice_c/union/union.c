 #include <stdio.h>
# include <strings.h>

typedef struct abc { 
		enum{a1 = 1, b1, c1, d1}tag;
		 union a {
				int a;
				int b;
				char c;
				char d;
		}obj;
}abc;
#if r
 fun (struct abc * obj1 )
{
		printf("%d\n", obj1 -> obj .  a);
		printf("%d\n", obj1 -> tag);
		return ;
}
#endif

int main(void)

{
		struct abc *obj = malloc(sizeof(abc));
		 obj -> obj . c = 65;
		 obj -> tag = c1;
		printf("%08x\n", (unsigned int)&(obj));
		printf("%d\n", obj -> obj . a);
		printf("%08x\n", (unsigned int)&(obj));
#if r
		fun (obj);
#endif
		return 0;
}
