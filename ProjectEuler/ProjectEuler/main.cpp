#include"ProjectEuler.h"
#include "DaysOfYear.h"
int main()
{
	std::cout << "Problem 1:" << sum_multi_3_5_below_1000() << std::endl;

	std::cout << "Problem 2:" << sum_even_fib() << std::endl;

	std::cout << "Problem 3:" << largest_prime_factor() << std::endl;

	std::cout << "Problem 4:" << largest_palindrome() << std::endl;

	std::cout << "Problem 5:" << divisible_1_to_20() << std::endl;

	std::cout << "Problem 6:" << dif_SoS_and_SotS_2() << std::endl;

	std::cout << "Problem 7:" << prime_10001() << std::endl;

	std::cout << "Problem 8:" << find_max_prod_in_1000digit() << std::endl;

	std::cout << "Problem 9:" << pyth_tryplet()<< std::endl;

	//std::cout << "Problem 10:" << sum_primes_below_2mln() << std::endl;

	std::cout << "Problem 11:" << max_in_adj_numbers() << std::endl;

	std::cout << "Problem 12:" << triangle_number_over500_divisors() << std::endl;

	std::cout << "Problem 13:";
	auto v = mega_sum("Problem13.txt");
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i];
	std::cout << std::endl;

	std::cout << "Problem 14:" << longest_chain_of_Collats_seq() << std::endl;

	std::cout << "Problem 15:" << ways_to_left_courner_in_20x20_grid() << std::endl;

	std::cout << "Problem 16:" << digit_sum_of_2_pow_10000() << std::endl;

	std::cout << "Problem 17:" << numbers_to_letters_sum() << std::endl;

	std::cout << "Problem 18:" << triangle_sum("Problem18.txt") << std::endl;

	std::cout << "Problem 19:" << count_sundays() << std::endl;

	std::cout << "Problem 20:" << dig_fact_sum() << std::endl;

	std::cout << "Problem 21:" << amicable_numbers() << std::endl;

	std::cout << "Problem 22:" << names_score("Problem22.txt") << std::endl;

	std::cout << "Problem 23:" << non_abundant_sums() << std::endl;

	std::cout << "Problem 24:";
	std::vector<size_t> problem24 = lex_permutation();
	for (auto x : problem24)
		std::cout << x;
	std::cout << std::endl;

	std::cout << "Problem 25:" << digit1000_Fib() << std::endl;

	std::cout << "Problem 29:" << distinst_pows() << std::endl;

	std::cout << "Problem 30:" << fifth_pow_sum() << std::endl;

	std::cout << "Problem 67:" << triangle_sum("Problem67.txt") << std::endl;

	std::cout << "Problem 114:" <<counting_block_combinations(50, 3) << std::endl;
	system("pause");
}