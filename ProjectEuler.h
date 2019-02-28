#ifndef Euler_H
#define Euler_H
#include<iostream>
#include<assert.h>
#include<string>
#include<vector>
#include<fstream>
#include<math.h>
#include<sstream>

//Problem 1
///Find the sum of all the multiples of 3 or 5 below 1000.
size_t sum_multi_3_5_below_1000();

///Find the sum of all the multiples of n
size_t sum_divisible(size_t n);



//Problem 2
///By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
size_t sum_even_fib();

//Problem 3
///Find the largest prime factor of the number 600851475143 
long long largest_prime_factor();

//Problem 4
///Find the largest palindrome made from the product of two 3-digit numbers.
size_t largest_palindrome();

///Checks whether the number is palindrome
bool is_palindrome(size_t n);

//Problem 5
///Find smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
size_t divisible_1_to_20();

//Problem 6
///Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
long long dif_SoS_and_SotS();

///Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
long long dif_SoS_and_SotS_2();

//Problem 7 
///Find is the 10 001st prime number 
long long prime_10001();

///Return true if number is prime
bool is_prime(long long n);

//Problem 8 
///Find the thirteen adjacent digits in the 1000-digit number that have the greatest product 
long long find_max_prod_in_1000digit();

//Problem 9
///Find Pythagorean triplet: a+b+c=1000(return a*b*c)
long long pyth_tryplet();

///Return true if three numbers is Pythagorean triplet
bool is_Pyth_triplet(size_t a, size_t b, size_t c);

//Problem 10
//Find the sum of all the primes below two million.
long long sum_primes_below_2mln();

//Problem 11
///Find is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid
unsigned long max_in_adj_numbers();

//Problem 12
///Find the value of the first triangle number to have over five hundred divisors 
unsigned long long triangle_number_over500_divisors();

//Problem 13
///Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
std::vector<size_t> mega_sum(const std::string& fname);

//Problem 14
///Find starting number, under one million, produces the longest chain of Collatz sequence
unsigned long longest_chain_of_Collats_seq();

//Problem 15
///How many routes from right-up courner to left-down are there through a 20×20 grid?
unsigned long long ways_to_left_courner_in_20x20_grid();

//Problem16
///Find the sum of the digits of the number 2^1000
size_t digit_sum_of_2_pow_10000();

//Problem17
///Find how many letters would be used if all the numbers from 1 to 1000 (one thousand) inclusive were written out in words 
size_t numbers_to_letters_sum();





#endif 
