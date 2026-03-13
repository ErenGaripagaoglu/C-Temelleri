int linearSearch(const int array[], int searchKey, int size) {
	int i;
	
	for(i=0; i < size; i++) {
		if(searchKey == array[i]) {
			break;
		}
	}
	
	return i;
}

int bubbleSort(int a[], int size) {
	
	int pass, i, hold;
	
	for (pass = 1; pass < size; pass++) {
		for(i = 0; i < size -1; i++) {
			
			if(a[i] > a[i +1]) {
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}
	
	for (i=0; i < size; i++) {
		printf("%d,",a[i]);
	}
	
	return 0;
}

int binarySearch(const int a[], int searchKey, int low, int high) {
	
	int middle;
	
	while (low <= high) {
		middle = (low + high) / 2;
		
		if (searchKey == a[middle]) {
			return middle;
		}
		
		else if (searchKey < a[middle]) {
			high = middle - 1;
		}
		
		else
		{
			low = middle + 1;
		}
		
	}
	
	return -1;
}
