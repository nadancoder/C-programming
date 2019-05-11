#include <stdio.h>
#include <stdbool.h>
#include <stdalign.h>
/*
    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Other operators

*/

void test_arithmetic(char a, char b){
    char c;

    c = a + b;
    printf(" %d + %d = %d\n", a, b, c);

    c = a - b;
    printf(" %d - %d = %d\n", a, b, c);

    c = a * b;
    printf(" %d * %d = %d\n", a, b, c);

    c = a / b;
    printf(" %d / %d = %d\n", a, b, c);

    float d = a / (float)b;

    printf(" %d / %d = %f\n", a, b, d);

    c = a % b;
    printf(" %d %% %d = %d\n", a, b, c);

    c = a++;
    printf(" %d++ = %d\n", a, c);

    c = a--;
    printf(" %d-- = %d\n", a, c);
 
    c = --a;
    printf(" --%d = %d\n", a, c);
    c = ++a;
    printf(" ++%d = %d\n", a, c);
}

void test_relational(int a, int b){
    
    printf("%d == %d is %s\n", a, b, (a == b) ? "true" : "false" );

    printf("%d != %d  is %s\n", a, b, (a != b) ? "true" : "false" );

    printf("%d > %d is %s\n", a, b, (a > b) ? "true" : "false");

    printf("%d < %d is %s\n", a, b, (a < b) ? "true" : "false");

    printf("%d >= %d  is %s\n", a, b, (a >= b) ? "true" : "false");

    printf("%d <= %d  is %s\n", a, b, (a <= b) ? "true" : "false");    

}

void test_binary(int a, int b){
    /*
    1011  -- 11
    0101  -- 5
    --------
    0001
    */
    int c = a & b;
    printf("%d & %d is %d\n", a, b, c);

    /*
    1011  -- 11
    0101  -- 5
    --------
    1111
    */
    c = a | b;
    printf("%d | %d is %d\n", a, b, c);
    /*
    1011  -- 11
    0101  -- 5
    --------
    1110
    */
    c = a ^ b;
    printf("%d ^ %d is %d\n", a, b, c);
    
    c = ~a;
    printf("~%d is %d\n", a, c);
    /*
    1011 << 2
    101100  -- 44
    
    */
    c = a << 2;
    printf("%d << 2 is %d\n", a, c);
    /*
    1011 >> 2
    0010  - 2
    
    */
    c = a >> 2;
    printf("%d >> 2 is %d\n", a, c);
}

void test_logical(bool a, bool b){
    bool c = a && b;
    printf(" %s && %s is %s\n", 
                        a ? "true" : "false", 
                        b ? "true" : "false", 
                        c ? "true" : "false");

    c = a || b;

    printf(" %s || %s is %s\n", 
                        a ? "true" : "false", 
                        b ? "true" : "false", 
                        c ? "true" : "false");

   c = !a;
   printf(" !%s is %s\n", 
                        a ? "true" : "false", 
                        c ? "true" : "false");
}

void test_assignment(int a){
    int b = a;
    printf(" %d = %d is %d\n", b, a, b);

    int c = b;
    b += a;
    printf(" %d += %d is %d\n", c, a, b);

    c = b;
    b -= a;
    printf(" %d -= %d is %d\n", c, a, b);

    c = b;
    b /= a;
    printf(" %d /= %d is %d\n", c, a, b);

    c = b;
    b *= a;
    printf(" %d *= %d is %d\n", c, a, b);

    c = b;
    b <<= a;
    printf(" %d <<= %d is %d\n", c, a, b);

    c = b;
    b >>= a;
    printf(" %d >>= %d is %d\n", c, a, b);

    c = b;
    b &= a;
    printf(" %d &= %d is %d\n", c, a, b);

    c = b;
    b |= a;
    printf(" %d |= %d is %d\n", c, a, b);

    c = b;
    b ^= a;
    printf(" %d ^= %d is %d\n", c, a, b);

}

void test_misc(){
    int a[] = {5,10};
    int c = 5;

    printf(" a[0] = %d\n", a[0]);

    printf(" (5 + 2) * 2 = %d\n",(5 + 2) * 2);

    printf(" *a = %d\n", *(a+1));

    printf(" &c = %p\n", &c);

    printf("sizeof(a[]) is %d\n",sizeof(a));

    c = (5,6,7,8);
    printf(" 5, 6 is %d\n", c );

    char d = -c;
    printf("value of d is %d\n", d);

    printf("Alignment of integer is %d\n", alignof(c));
    printf("Alignment of char is %d\n", alignof(d));

    int g = 2;
}

void main(int argc, char* argv[]){

    int a = 11;
    int b = 5;
    //test_arithmetic(a, b);
    //test_relational(a, b);
    //test_binary(a,b);
    //test_logical(true, true);
    //test_assignment(a);
    //test_misc();
}
