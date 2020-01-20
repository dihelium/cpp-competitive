int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;
	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
	return 0;
}

qsort(a,n,sizeof(int),compare);