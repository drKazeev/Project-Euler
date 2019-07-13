#ifndef Euler_H
#define Euler_H

#include<iostream>
#include<assert.h>
#include<string>
#include<vector>
#include<fstream>
#include<math.h>
#include<sstream>
#include<ostream>
#include<iterator>
#include<algorithm>


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

//Problem18 & 67
///Find triangle sum(input path to txt file with triangle)
unsigned long long triangle_sum(std::string fpath);

//Problem19
///You are given the following information, but you may prefer to do some research for yourself.
///1 Jan 1900 was a Monday.
///Thirty days has September,
///April, June and November.
///All the rest have thirty - one,
///Saving February alone,
///Which has twenty - eight, rain or shine.
///And on leap years, twenty - nine.
///A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
///How many Sundays fell on the first of the month during the twentieth century(1 Jan 1901 to 31 Dec 2000) ?
size_t count_sundays();

//Problem20
///Find the sum of the digits in the number 100!
size_t dig_fact_sum();

//Problem21
///Let d(n) be defined as the sum of proper divisors of n(numbers less than n which divide evenly into n).
///If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.
///For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. 
///The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
///Evaluate the sum of all the amicable numbers under 10000.
///return sum of proper divisors
int sum_of_divisors(int n);

///solving problem
int amicable_numbers();

//Problem22
///Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over 
///five-thousand first names, begin by sorting it into alphabetical order. Then working out the 
///alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.
unsigned long long names_score(std::string fpath);

///split string to words by delmiter
std::vector<std::string> split(const std::string& s, char delimiter);

//Problem23
///Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers
size_t non_abundant_sums();

//Problem114
///A row measuring seven units in length has red blocks with a minimum length of three units placed on it, such
///that any two red blocks (which are allowed to be different lengths) are separated by at least one grey square. There are exactly seventeen 
///ways of doing this. How many ways can a row measuring fifty units in length be filled?
unsigned long long counting_block_combinations(int m, int n);


#endif