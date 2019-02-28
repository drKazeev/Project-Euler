#include "ProjectEuler.h"
//Problem 1
size_t sum_multi_3_5_below_1000()
{
	return sum_divisible(3) + sum_divisible(5) - sum_divisible(15);
}

size_t sum_divisible(size_t n)
{
	size_t t = 999 / n;
	return n * (t*(t + 1)) / 2;
}

//Problem 2
size_t sum_even_fib()
{
	size_t res = 0;
	size_t f1 = 1;
	size_t f2 = 1;
	size_t f3 = f1+f2;
	while (f3 < 4000000)
	{
		res += f3;
		f1 = f2 + f3;
		f2 = f3 + f1;
		f3 = f1 + f2;
	}
	return res;
}

////Problem 3
long long largest_prime_factor()
{
	auto x = 600851475143;
	size_t i = 2;
	while (i * i < x)
	{
		while (x % i == 0)
			x /= i;
		i++;
	}
	return x;
}

//Problem 4
size_t largest_palindrome()
{
	size_t max = 0;
	for (size_t i=999; i >= 100; i--)
		for (size_t j = 999; j >=i ; j--)
		{
			auto t = i * j;
			if (is_palindrome(t) && t>max) max = t;
		}
	return max;
}

bool is_palindrome(size_t n)
{
	std::string s = std::to_string(n);
	auto size = s.length();
	for (size_t i = 0; i < size / 2; i++)
		if (s[i] != s[size - i - 1]) return false;
	return true;
}

//Problem 5
size_t divisible_1_to_20()
{
	size_t x = 0;
	while (true)
	{
		auto flag = true;
		x += 10;
		for (size_t i = 20; i > 1; i--)
			if (x%i != 0) { flag = false; break; }
		if (flag) return x;
	}
}

//Problem 6
long long dif_SoS_and_SotS()
{
	long long res = 0;
	int a[100];
	for (auto i = 0; i < 100; i++)
		a[i] = i+1;
	for (size_t i = 0; i<100; i++)
		for (size_t j = i + 1; j < 100; j++)
			res = res+ 2*a[i] * a[j];

	return res;
}

long long dif_SoS_and_SotS_2()
{
	long long sum1 = 0;
	long long sum2 = 0;
	for (auto i = 1; i <= 100; i++)
	{
		sum1 += i;
		sum2 = sum2+i*i;
	}
	return sum1 * sum1 - sum2;
}

//Problem 7
long long prime_10001()
{
	size_t count = 0;
	long long cur_numb = 2;
	while (true)
	{
		if (is_prime(cur_numb)) count++;
		if (count == 10001) return cur_numb;
		cur_numb++;
	}
}

bool is_prime(long long n)
{

	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}

//Problem 8
long long find_max_prod_in_1000digit()
{
	std::string s = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	auto sz = s.length();
	size_t ll;
	long long max = 0;
	for (size_t i = 0; i < sz; i++)
	{
		long long temp = 1;
		auto l = i;
		for (auto j = l; j < i + 13; j++)
		{
			if (j >= sz) break;
			temp = temp* ((int)s[j]-'0');
		}
		if (temp > max) { max = temp;  ll = l; }
	}
	return max;
}

//Problem 9
long long pyth_tryplet()
{
	for (size_t c = 0; c<1000; c++)
		for (size_t b = 0; b < 1000/2; b++)
			for (size_t a = 0; a < 1000/3; a++)
				if (is_Pyth_triplet(a, b, c) && a + b + c == 1000)
	               return a * b*c;
}

bool is_Pyth_triplet(size_t a, size_t b, size_t c)
{
	return (c*c==a*a+b*b);
}

//Problem 10
long long sum_primes_below_2mln()
{
	//memory effectively, time no effectively, for better time we can use "Sieve of Eratosthenes"
	long long res = 0;
	for (long long i = 2; i < 2000000; i++)
		if (is_prime(i)) res += i;
	return res;
}

//Problem 11
unsigned long max_in_adj_numbers()
{
	size_t matrix[20][20] = { {8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8}, 
	{49, 49, 99 ,40 ,17 ,81 ,18 ,57 ,60 ,87 ,17 ,40 ,98 ,43 ,69 ,48 ,4 ,56 ,62 ,0},
	{81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
	{52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
	{22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
	{24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
	{32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
	{67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
	{24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
	{21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
	{78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
	{16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
	{86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
	{19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
	{4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
	{88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
	{4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
	{20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
	{20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
	{1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48} };

	size_t max = 0;
	for (unsigned int y = 0; y < 20; y++)
		for (unsigned int x = 0; x < 20; x++)
		{
			if (x + 3 < 20)
			{
				unsigned int current = matrix[x][y] * matrix[x + 1][y] * matrix[x + 2][y] * matrix[x + 3][y];

				if (max < current)

					max = current;
			}
			if (y + 3 < 20)
			{
				unsigned int current = matrix[x][y] * matrix[x][y + 1] * matrix[x][y + 2] * matrix[x][y + 3];
				if (max < current) max = current;
			}
			if (x + 3 < 20 && y + 3 < 20)
			{

				unsigned int current = matrix[x][y] * matrix[x + 1][y + 1] * matrix[x + 2][y + 2] * matrix[x + 3][y + 3];
				if (max < current) max = current;

			}
			if (x + 3 < 20 && y >= 3)
			{
				unsigned int current = matrix[x][y] * matrix[x + 1][y - 1] * matrix[x + 2][y - 2] * matrix[x + 3][y - 3];
				if (max < current)	max = current;
			}
		}
	return max;
}

//Problem 12
unsigned long long triangle_number_over500_divisors()
{
	size_t input = 0;
	size_t next = 0;
	size_t res = 0;
	while (input < 500)
	{
		input = 0;
		next += 1;
		res += next;
		if (res % 2 == 0)
		{
			for (int i = 1; i <= sqrt(res); i++)
			{
				if (res % i == 0)
				{
					input += 2;
				}
			}
		}
	}
	return res;
}

//Problem 13
std::vector<size_t> mega_sum(const std::string & fname)
{
	std::ifstream file(fname);
	std::string str;
	std::vector<size_t> sum(60, 0);
	while (!file.eof())
	{
		file >> str;
		std::vector<size_t> add;
		for (auto i = str.rbegin(); i != str.rend(); i++)
			add.push_back(*i - '0');
		add.resize(sum.size(), 0);
		for (size_t i = 0; i < add.size(); i++)
		{
			sum[i] += add[i];
			if (sum[i] >= 10)
			{
				sum[i + 1]++; 
				sum[i] -= 10; 
			}
		}
	}
		file.close();
		auto j = sum.rbegin();
		while (*j == 0)
			j++;
		std::vector<size_t> res(10);
		for (size_t i = 0; i < res.size(); i++)
			res[i] = *j++;
		return res;
}

//Problem 14
unsigned long longest_chain_of_Collats_seq()
{
	unsigned long res = 0;
	unsigned long max=0;
	for (unsigned long i = 999999; i > 1; i-=2)
	{
		auto j = i;
		unsigned long temp = 0;
		while (j != 1)
		{
			if (j % 2 == 0) j /= 2;
			else j = (j * 3) + 1;
			temp++;
		}
		if (temp > max)
		{
			max = temp;
			res = i;
		}
	}
	return res;
}

//Problem 15
unsigned long long ways_to_left_courner_in_20x20_grid()
{
	unsigned long long res=1;
	for (int i = 0; i < 20; i++)
	{
		res *= (2 * 20) - i;
		res /= (i + 1);
	}
	return res;
}

//Problem 16
size_t digit_sum_of_2_pow_10000()
{
	//I use Wolphram Alpha for this, bcs I have no idea how to do it w/0 BigInteger class
	size_t res = 0;
	std::string s="10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
	for (size_t i = 0; i < s.length(); i++)
		res += (s[i] - '0');
	return res;
}

//Problem 17
size_t numbers_to_letters_sum()
{
	size_t sum1 = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4; //1 - 9
	size_t sum2 = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8;//10 - 19
	size_t sum3  = 10 * (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) + 8 * sum1;//20-99
	size_t sum4 = sum1 * 100 + 9 * (sum1 + sum2 + sum3) + 9 * 7 + 891 * 10;//100-999
	return sum1 + sum2 + sum3 + sum4 + 11;// one thousand => +11 
}






