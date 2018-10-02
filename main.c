int suma (int a, int b) {
	return a+b;
}


int factorial (int n) {
	int i;
	int res = 1;

	for (i = 1; i <= n; ++i) {
		res = res * i;
	}
	return res;
}


int main(int argc, char const *argv[])
{
	printf("Hello world!\n");
	return 0;
}