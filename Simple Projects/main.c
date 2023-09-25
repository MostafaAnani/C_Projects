#include <stdio.h>

int main() {
  float selling_price;
  float cost_price;
  printf("Please enter your cost price\n");
  scanf("%f",&cost_price);
  printf("Please enter your selling price\n");
  scanf("%f",&selling_price);
  if(selling_price > cost_price)
  printf("Total profit = %f\n",(selling_price - cost_price));
  else if (selling_price < cost_price)
   printf("Total losses = %f\n",(selling_price - cost_price));
   else 
   printf("It`s No profit or losses ");
}
