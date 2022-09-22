#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while(n-- > 0)
	{
		if(*(unsigned char*)(s1 + i) == *(unsigned char*)(s2 + i))
			i++;
		else
			return(*(unsigned char*)(s1 + i) - *((unsigned char*)s2 + i));
	}
	return(0);
}

int main()
{
	
	return(0);
}