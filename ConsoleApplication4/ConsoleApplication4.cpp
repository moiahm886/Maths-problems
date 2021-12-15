#include<iostream>
#include<ctime>
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
	void rollingadice()
	{
		srand(unsigned(time(0)));
		int x = rand() % 7;
		switch (x)
		{
		case 1:
			cout << "Your price is a keychain\n";
			break;
		case 2:
			cout << "Your price is a cup\n";
			break;
		case 3:
			cout << "Your prize is a necklace\n";
			break;
		case 4:
			cout << "Your price is a T-Shirt\n";
			break;
		case 5:
			cout << "Your price is a watch\n";
			break;
		case 6:
			cout << "Your price is an original headphones\n";
		}
	}
	void collatz(int num)
	{
		if (num >= 0)
		{
			cout << num << "\t";
			while (num != 1)
			{
				if (num % 2 == 0)
				{
					num /= 2;
					cout << num << "\t";
				}
				else
				{
					num = (num * 3) + 1;
					cout << num << "\t";
				}
			}
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
	M.rollingadice();
	M.collatz(121);
}