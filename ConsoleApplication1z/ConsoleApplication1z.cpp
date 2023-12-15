#include <iostream>
int main()
{
	const int n = 9;
	int i, a[n],a1[n], k=0;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = 0; i < n; ++i)
		if (a[i] > 0 && a[i] % 2 == 0)
		{
			std::cout << a[i];
		}
	for(i=0;i<n;++i)
		if(a[i]<0)
		{
			std::cout << a[i];
		}
	return 0;
}