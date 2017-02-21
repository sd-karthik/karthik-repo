# include <stdio.h>
int main()
{
#if 0
		char *s1;
		char *s2;
		s1 = malloc(20);
		s1 = "good";
		s2 = s1;
		printf("%s\n",s2);
#endif
		char s1[5] = "globa";
//		char s2[5] = "global edge";

		printf("%s\n", s1);
//		printf("%s\n", s2);
		printf("size of s1 ==> %d\n", strlen(s1));
//		printf("size of s2 ==> %d\n", strlen(s2));
		printf("%d\n", strcmp(s1,"global"));
		return 0;
}
