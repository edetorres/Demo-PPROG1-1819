
int factorial (int n) {
	int i;
	int res = 0;

	for (i = 0; i < n; ++i) {
		res = res * i;
	}
	return res;
}


int main(int argc, char const *argv[])
{
	printf("Hello world!\n");
	return 0;
}