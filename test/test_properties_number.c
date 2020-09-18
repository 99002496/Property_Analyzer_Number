#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <properties_number.h>
#define PROJECT_NAME    "Property_Analyzer"

/* Prototypes for all the test functions */
void test_prime(void);
void test_armstrong(void);
void test_even_odd(void);
void test_palindrome(void);
void test_power(void);
void test_harshad(void);
void test_perfect_square(void);
void test_perfect_cube(void);
void test_automorphic_number(void);
void test_divisibility_3(void);
void test_divisibility_5(void);
void test_divisibility_7(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "armstrong", test_armstrong);
  CU_add_test(suite, "even_odd", test_even_odd);
  CU_add_test(suite, "palindrome", test_palindrome);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "harshad", test_harshad);
  CU_add_test(suite, "perfect_square", test_perfect_square);
  CU_add_test(suite, "perfect_cube", test_perfect_cube);
   CU_add_test(suite, "automorphic_number", test_automorphic_number;
  CU_add_test(suite, "divisibility_3", test_divisibility_3);
  CU_add_test(suite, "divisibility_5", test_divisibility_5);
  CU_add_test(suite, "divisibility_7", test_divisibility_7);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
