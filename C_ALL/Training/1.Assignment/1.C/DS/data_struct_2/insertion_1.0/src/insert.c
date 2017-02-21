//insert.c

//Insertion sorting function

//DOC:08/12/16

int insert(int arr[], int size)
{
	int temp;
	int i;
	int j;

	for(i = 1; i < size; i++) {
		j = i;
		temp = arr[i];
		while((j > 0) && (arr[j] < arr[j-1])) 
		{
			arr[j + 1] = arr[j];
			j--;		
		}
		arr[j + 1] = temp;
	}
	return 0;
}
