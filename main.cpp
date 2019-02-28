#include"ProjectEuler.h"


int main()
{
	std::cout << "Problem 1:" <<sum_multi_3_5_below_1000()<< std::endl;
	
	std::cout << "Problem 2:" <<sum_even_fib() << std::endl;

	std::cout << "Problem 3:" << largest_prime_factor() << std::endl;

	//std::cout << "Problem 4:" << largest_palindrome() << std::endl;

	std::cout << "Problem 5:" << divisible_1_to_20() << std::endl;

	std::cout << "Problem 6:" << dif_SoS_and_SotS_2() << std::endl;

	std::cout << "Problem 7:" << prime_10001() << std::endl;

	std::cout << "Problem 8:" << find_max_prod_in_1000digit()<< std::endl;

	//std::cout << "Problem 9:" << pyth_tryplet()<< std::endl;

	//std::cout << "Problem 10:" << sum_primes_below_2mln() << std::endl;

	std::cout << "Problem 11:" << max_in_adj_numbers() << std::endl;

	//std::cout << "Problem 12:" << triangle_number_over500_divisors() << std::endl;

	std::cout << "Problem 13:";
	auto v = mega_sum("Problem13.txt");
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i];
	std::cout << std::endl;

	std::cout << "Problem 14:" << longest_chain_of_Collats_seq() << std::endl;

	std::cout << "Problem 15:" << ways_to_left_courner_in_20x20_grid() << std::endl;

	std::cout << "Problem 16:" << digit_sum_of_2_pow_10000() << std::endl;

	std::cout << "Problem 17:" << numbers_to_letters_sum() << std::endl;
	system("pause");
}