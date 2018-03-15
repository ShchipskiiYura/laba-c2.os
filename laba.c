#include <stdio.h>

int main(void) {
puts("====Discriminant calculator====");
int a;
puts("Enter a: "); 
scanf("%d", &a);
int b;
puts("Enter b: "); 
scanf("%d", &b);
int c;
puts("Enter c: "); 
scanf("%d", &c);
int d;
d=b*b-4*a*c;
if(d<0){
printf("D = %d(equation has no real roots)", d);
} else if(d>0){
printf("D = %d(equation has two roots)", d);
} else printf("D = %d(equation has single root)", d);
puts("    ");

  return 0;
}
