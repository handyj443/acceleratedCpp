#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Enter all grades followed by EOF" << endl;
	vector<double> homework;
	double x;
	while (cin >> x) {
		homework.push_back(x);
	}
	for (vector<double>::size_type i = 0; i < homework.size(); ++i)
	{
		cout << homework[i] << endl;
	}
	return 0;
}