#include "libft.h"

int      ft_memcmp(const void *s1, const void *s2, size_t n)
{
   int i;
   char *cmp1;
   char *cmp2;

   i = 0;
   cmp1 = (char*)s1;
   cmp2 = (char*)s2;

   while (n--)
   {
      if (cmp1[i] > cmp2[i])
         return (1);
      else if (cmp2[i] > cmp1[i])
         return (-1);
      i++;
   }

   return (0);
}