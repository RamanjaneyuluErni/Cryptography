#include<gmp.h>
#include<stdio.h>

void gcd(mpz_t a, mpz_t b)
{
   if(mpz_cmp_ui(a,0)==0)
   {
     gmp_printf("%Zd",b);
     return;
   }
   
   mpz_mod(b,b,a);
   gcd(b,a);

}
int main()
{
   mpz_t a,b;
   mpz_init(a);
   mpz_init(b);
   gmp_printf("Enter a and b\n");
   gmp_scanf("%Zd",a);
   gmp_scanf("%Zd",b);
   if(mpz_cmp(a,b)>0) mpz_swap(a,b);
   gcd(a,b);
   mpz_clear(a);
   mpz_clear(b);
   return 0;
}
