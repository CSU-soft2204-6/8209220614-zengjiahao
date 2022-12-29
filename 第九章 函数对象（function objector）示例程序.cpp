#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

void print(double i)
{   cout<<i<<" ";  }

int main() {
    double test_score[]={76,92,84,65,96};
    double exp_score[]={88,96,90,72,98};
	vector<double>  vec_test(test_score,test_score+5);
    vector<double>  vec_exp(exp_score,exp_score+5);
	vector<double>  vec_total(vec_test.size());

	cout<<"Test score: ";
	for_each(vec_test.begin(),vec_test.end(),print);
    cout<<endl;
    cout<<"Experiment score: ";
    for_each(vec_exp.begin(),vec_exp.end(),print);
	cout<<endl;

	for(double i=0;i<=4;i++)	{
	  vec_test[i]=vec_test[i]*0.6; //考试成绩占60%
	  vec_exp[i]=vec_exp[i]*0.4;   //实验成绩占40%
	}

    cout<<"Total score: ";
	transform(vec_test.begin(),vec_test.end(),vec_exp.begin(),
vec_total.begin(),plus<double>());
	for_each(vec_total.begin(),vec_total.end(),print);
	cout<<endl;

    cout<<"After sorting: ";
	sort(vec_total.begin(),vec_total.end(),greater<double>());
    for_each(vec_total.begin(),vec_total.end(),print);
	cout<<endl;
    return 0;
}
