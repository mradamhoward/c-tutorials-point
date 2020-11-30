#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>


#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
const int MAX = 3;



int externalCount;

static int count = 5;


//Example data types uses
int age;

char flag;
double amount;
long int billion;
char name[] = "Adam";
unsigned char uch = 2;
char first = 'A';
signed char sch = -2;
unsigned int unsignedInt = 4000000000;
short sh = 32000;
unsigned short ush = 65000;
unsigned long ul = 18446744073709551615;
//floating price
float price;


//function declarations
void arithmethicOperators(void);
void incrementBlockLevelIndex(void);
extern void write_extern();
double getAverage(int arr[], int size);


void pointerToArray(){
     double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;
 
   /* output each array element's value */
   printf( "Array values using pointer\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %f\n",  i, *(p + i) );
   }

   printf( "Array values using balance as address\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }
}

void pointerToPointer(){
    int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

}


int * getRandom( ) {

   static int  r[10];
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

void assignPrimitiveTypesValues(){
    age = 24;
    price = 5000.24;
    flag = 'v';
    amount = 99.99;
    billion = 1000000000;
}


void printDataTypeMax(){
    
    //Basic datattypes
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    //Floating point types    
    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );



}

void calcAndPrintArea(){
    int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   //using constants
   const int  LENGTHC = 20;
   const int  WIDTHC = 7;
   const char NEWLINEC = '\n';
   int area2;  
   
   area2 = LENGTHC * WIDTHC;
   printf("value of area2 (with constants) : %d", area2);
   printf("%c", NEWLINE);
}

void incrementBlockLevelIndex( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}

void arithmethicOperators(){
    int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 a + b Value of c is %d\n", c );
	
   c = a - b;
   printf("Line 2 a - b Value of c is %d\n", c );
	
   c = a * b;
   printf("Line 3 a * b Value of c is %d\n", c );
	
   c = a / b;
   printf("Line 4 a / b Value of c is %d\n", c );
	
   c = a % b;
   printf("Line 5 a %% b Value of c is %d\n", c );
	
   c = a++; 
   printf("Line 6 a++ Value of c is %d\n", c );
	
   c = a--; 
   printf("Line 7 a-- Value of c is %d\n", c );
}

void relationalOperators(){
    int a = 21;
   int b = 10;
   int c ;

   if( a == b ) {
      printf("Line 1 - a is equal to b\n" );
   } else {
      printf("Line 1 - a is not equal to b\n" );
   }
	
   if ( a < b ) {
      printf("Line 2 - a is less than b\n" );
   } else {
      printf("Line 2 - a is not less than b\n" );
   }
	
   if ( a > b ) {
      printf("Line 3 - a is greater than b\n" );
   } else {
      printf("Line 3 - a is not greater than b\n" );
   }
   
   /* Lets change value of a and b */
   a = 5;
   b = 20;
	
   if ( a <= b ) {
      printf("Line 4 - a is either less than or equal to  b\n" );
   }
	
   if ( b >= a ) {
      printf("Line 5 - b is either greater than  or equal to b\n" );
   }
}

void logicalOperators(){
    int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
}

void assignmentOperators(){
    int a = 21;
   int c ;

   c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );

   c  = 200;
   c %=  a;
   printf("Line 6 - %= Operator Example, Value of c = %d\n", c );

   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
}

void miscOperators(){
    
   int a = 4;
   short b;
   double c;
   int* ptr;

   /* example of sizeof operator */
   printf("Line 1 - Size of variable a = %d\n", sizeof(a) );
   printf("Line 2 - Size of variable b = %d\n", sizeof(b) );
   printf("Line 3 - Size of variable c= %d\n", sizeof(c) );

   /* example of & and * operators */
   ptr = &a;	/* 'ptr' now contains the address of 'a'*/
   printf("value of a is  %d\n", a);
   printf("*ptr is %d.\n", *ptr);

   /* example of ternary operator */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "Value of b is %d\n", b );

   b = (a == 10) ? 20: 30;
   printf( "Value of b is %d\n", b );
}

void nestedLoops(){
    int i, j;
   
   for(i = 2; i<100; i++) {

      for(j = 2; j <= (i/j); j++) 
      if(!(i%j)) break; // if factor found, not prime
      if(j > (i/j)) printf("%d is prime\n", i);
   }
}

void arrayBasics(){
     int n[ 10 ]; /* n is an array of 10 integers */
   int i,j;
 
   /* initialize elements of array n to 0 */         
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }
   
   /* output each array element's value */
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
}

void multiDimArray(){
     int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
}

void basicPointers(){
    int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );
}

void pointerArithmetic(){
     int  var[] = {10, 100, 200};
   int  i, *ptr;
 //increment
   /* let us have array address in pointer */
   ptr = var;
	

   
   for ( i = 0; i < MAX; i++) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* move to the next location */
      ptr++;
   }
 //decrement
   ptr = &var[MAX-1];
	
   
   for ( i = MAX; i > 0; i--) {

      printf("Address of var[%d] = %x\n", i-1, ptr );
      printf("Value of var[%d] = %d\n", i-1, *ptr );

      /* move to the previous location */
      ptr--;
   }


    //comparison
   ptr = var;
   i = 0;
	
   while ( ptr <= &var[MAX - 1] ) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* point to the next location */
      ptr++;
      i++;
   }
}
double getAvg(int *arr, int size) {

   int  i, sum = 0;       
   double avg;          
 
   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
 
   avg = (double)sum / size;
   return avg;
}

int * getRandm( ) {

   static int  r[10];
   int i;
 
   /* set the seed */
   srand( (unsigned)time( NULL ) );
	
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf("%d\n", r[i] );
   }
 
   return r;
}

void returnPointer(){

   /* a pointer to an int */
   int *p;
   int i;

   p = getRandm();
	
   for ( i = 0; i < 10; i++ ) {
      printf("*(p + [%d]) : %d\n", i, *(p + i) );
   }
}

void strings(){
     char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

}

void getSeconds(unsigned long *par) {
   /* get the current number of seconds */
   *par = time( NULL );
   return;
}

void pointersToFunctions(){
    /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   /* pass pointer to the array as an argument */
   avg = getAvg( balance, 5 ) ;
 
   /* output the returned value  */
   printf("Average value is: %f\n", avg );

   unsigned long sec;
   getSeconds( &sec );

   /* print the actual value */
   printf("Number of seconds: %ld\n", sec );
}



void arrayOfPointers(){
     int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* assign the address of integer. */
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   
    char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali"
   };
   
   i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
}

double getAverage(int arr[], int size) {

   int i;
   double avg;
   double sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = sum / size;

   return avg;
}

int main(int argc, char** argv){
    
    
    printf("Hello %s", &name);
    printf("\n");

    printf("Assigning Primitive Types, Values...\n");
    printf("\n");

    assignPrimitiveTypesValues();
    printf("\n");

    printf("Displaying Maximums...\n");
    printf("\n");

    printDataTypeMax();
    printf("\n");

    printf("Calculate and Display areas, using #define and const (Should be 50 and 140 output respectively) ...\n");
    printf("\n");

    calcAndPrintArea();

    printf("\n");

    printf("Start counting down and increment block level index...");
    while(count--) {
      incrementBlockLevelIndex();
    }
    printf("\n");

    //extern example
    externalCount = 50;
    write_extern();


    printf("\n");

    arithmethicOperators();

    printf("\n");

    relationalOperators();

      printf("\n");

    logicalOperators();

    printf("\n");

    assignmentOperators();

    printf("\n");

    miscOperators();

    int i;

    for(i = 24; i < 30; i++){
        printf("Value of i = %d\n", i);
    }
    printf("\n");
    int doWhile = 5;

    do {
     doWhile++;
     printf("Value of doWhile = %d\n", doWhile);
    } while(doWhile < 20);
    
    printf("\n");
    
    nestedLoops();


    //continue statement
       int a = 10;


    bool infinite = true;
   /* do loop execution */
   LOOP: do {
   
      if( a == 15) {
         /* skip the iteration */
         a = a + 1;
         continue;
      }
		
      printf("value of a: %d\n", a);
      a++;
   
   } while( a < 20 );

    if(infinite){
        infinite = false;
        a = 10;
        goto LOOP;
    }

    //array as argument

    int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage( balance, 5 ) ;
 
   /* output the returned value */
   printf( "Average value is: %f ", avg );
   
   //return array from function

    int *p;
   int index;

   p = getRandom();
	
   for ( index = 0; index < 10; index++ ) {
      printf( "*(p + %d) : %d\n", index, *(p + index));
   }


    pointerToArray();

    basicPointers();

    pointerArithmetic();

    arrayOfPointers();

    pointerToPointer();

    pointersToFunctions();

    returnPointer();

    strings();

    printf("Next: Structures\n");
    printf("https://www.tutorialspoint.com/cprogramming/c_structures.htm\n");
    return 0;
}