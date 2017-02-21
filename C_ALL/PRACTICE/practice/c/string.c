/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 13 October 2015 08:20:17  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  JEEVANA (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){

		char *str;
		char *res,*res1;
		char *pal , *temp;
		char *min_str , *max_str;
		int length, i = 0, min= 0  , len ;
		str = malloc (100);
		printf ("Enter string \n");

		fgets (str , 100 ,stdin);

		min_str = malloc (20);
		max_str = malloc (20);
		printf ("The string is %s\n",str);
		temp = str;
		length = strlen (str);
		*(str + length -1) = '\0';
		printf ("%d\n",length);
		res = malloc (100);
		
		res1 = res;
		for ( i = 0,res , temp ; i <= length-1 ; i++ ,temp++){
				*res++ = *temp;
				if (*temp == ' ' || *temp == '\0'){
						//res = res + 1;
						*res = '\0';
						pal = temp - 1;
						for (str , pal ; str < pal ; str++,pal--){
								if (*str != *pal){
										break;
								}
						}
						if ((str == pal) || (str > pal)){
								res = res1;
								printf ("the palindrome in the given string is %s\n",res);
								len = strlen(res);
								if (min == 0){
										//min_str = res;
										strcpy(min_str , res);
										min = len;
										printf ("min ---> %s\n",min_str);
										printf ("\n\n\n");
								}
								else{
										if (len > min) {
												strcpy(max_str , res);
												//max_str = res;
												printf ("max ---> %s\n",max_str);
												printf ("\n\n\n");
										}
										else{
											//	min_str = res;
												strcpy(min_str , res);
												min = len;
												printf ("min ---> %s\n",min_str);
												
												printf ("\n\n\n");
										}	
								}			
						

						}
						str = temp + 1;
						res = res1;
					//	*res = '\0';


				}

				//	printf ("**min ---> %s\n",min_str);
//		printf ("**max ---> %s\n",max_str);
		}
		
		printf ("min ---> %s\n",min_str);
		printf ("max ---> %s\n",max_str);

}








