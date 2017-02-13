//Calculator Program using command line arguments

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//float str_cmp(char *str1, char *str2);    // function to string compare
float add(float num1, float num2);      //function to add
float sub(float num1, float num2);      //function to subtract
float mul(float num1, float num2);      //function to multiply
float divi(float num1, float num2);		//function to divide

float main(int argc, char *argv[])		//commandline arguments
{
    float n1;
    float n2;
    
	float (*res) (float , float);

    n1 = atoi(argv[2]);		//string arguments to integer value
    n2 = atoi(argv[3]);

    if(argc != 4) {
        printf("try again by specifying 2 numbers\n");
        exit(1);
    }


    if((strcmp(argv[1], "add"))==0) {
        res = add;
    }

    else if((strcmp(argv[1], "sub"))==0) {
        res = sub;
    }

    else if((strcmp(argv[1], "mul"))==0) {
        res = mul;
    }

    else if((strcmp(argv[1], "divi"))==0) {
        res = divi;
    }

    else
    {
        printf("Invalid input operator\n");
        exit(1);
    }

    printf("The output:%f\n", res(n1, n2));
    return 0;
}

/*float str_cmp(char *str1, char *str2)
{
    while(*str1 && *str2) {
        if(*str1 == *str2){
            str1++;
            str2++;
            }        
        else return-1;
        }

    return 1;
}
*/
float add(float num1, float num2)
{
    float res=0;
    res = (num1 + num2);

    return res;
}

float sub(float num1, float num2)
{
    float res;
    res = (num1 - num2);
    return res;
}

float mul(float num1, float num2)
{
    float res;
    res = (num1 * num2);
    return res;
}

float divi(float num1, float num2)
{
    float res;
    res =(num1 / num2);
    return res;
}
