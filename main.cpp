#include <iostream>

int main()
{
   int int_a1= 1000, int_a2= 3;

   int_a1 -=int_a2;
   std::cout<<int_a1<<'\n';

   int_a1 *=int_a2;
   std::cout<<int_a1<<'\n';

   int_a1 /=int_a2;
   std::cout<<int_a1<<'\n';

   int_a1 %= 3 ;
   std::cout<<int_a1 << '\n';

    return 0;
}
