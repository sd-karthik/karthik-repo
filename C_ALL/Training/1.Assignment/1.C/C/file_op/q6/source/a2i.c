int a2i(char a[])
{
	int i;
	int num = 0;

	if(a[0] == '-') {                                        
		for(i = 1; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * -1;
	}		

	else if(a[0] == '+') {		
		for(i = 1; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * 1;
	}

	else {	
		for(i = 0; a[i] != '\n'; i++) {
			if(a[i] >= '0' && a[i] <= '9')
				num = num * 10  + (a[i] - '0');
			else if(a[i] == '.')
				break;
			else
				return 0;
		} 
		return num * 1;		
	}
}						
