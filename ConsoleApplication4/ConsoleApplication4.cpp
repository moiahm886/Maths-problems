#include<iostream>
using namespace std;
class Maths
{
private:
	int product;
	int sum;
	int Comb;

public:
	Maths()
	{
		sum = 0;
		Comb = 0;
	}
	int factorial(int num)
	{
		product = 1;
		while(num>0)
		{
			product *= num;
			num--;
		}
		return product;

	}
	void summation(int num)
	{
		if (num > 0)
		{
			sum += num;
			summation(num - 1);
		}
		else
		{
			cout << "The summation is " << sum << endl;
		}
	}
	void prime(int num)
	{
		int count = 0;
		cout << "\n\nThe number in Question is " << num << endl;
		for (int i = 2; i <= num/2 / 2; i++)
		{
			if (num % i == 0)
			{
				cout << num<<" is divisible by " << i << endl;
				count++;
			}
		}
		if (count == 0)
		{
			cout << "Hurrrrrayyyyy!!!!Its a prime number\n";
		}
		else
		{
			cout << "Hence proven "<<num<<" is not a prime number\n";
		}
	}
	void combination(int N, int R)
	{
		if (N > R)
		{
			Comb = (factorial(N)) / (factorial(R) * factorial(N - R));
			cout << "The combination for " << N << "C" << R << " is " << Comb << endl;
		}
		else
		{
			cout << "Number entered wrongly\n";
		}
	}
};
int main()
{
	Maths M;
	cout << "The factorial is "<<M.factorial(11) << endl;
	M.summation(54);
	M.prime(1234567);
	M.combination(8, 6);
}