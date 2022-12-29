#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<double>  scorevector;   //创建向量
	double max, temp;
	int i;
	cout << "Input -1 to stop:" << endl;
	cout << "Enter the original score 1: ";
	cin >> max;
	scorevector.push_back(max);
	for (i = 1; true; i++) {
		cout << "Enter the original score " << i + 1 << ": ";
		cin >> temp;
		if (temp == -1) {
			break;
		}
		scorevector.push_back(temp);
		if (temp > max)
			max = temp;
	}
	max /= 100;
	cout << "Output the standard scores: " << endl;
	for (i = 0; i < scorevector.size(); i++) {
		scorevector[i] /= max;
		cout << scorevector[i] << " ";
	}
	cout << endl;
	return 0;
}
