#include<unistd.h>

int	ft_isalnum(int an)
{
	return((an >= 'A' && an <= 'Z') || (an >= 'a' && an <= 'z') || (an >= '0' && an <= '9'));
}
