//courseID:CIS165-001HY
//name: Nihar Patel
//Prof. Wang
//Assignment#2
//Due by 09/29/2014

/*
steps
1.Input:
  a.doublePercent
  b.doubleTotal
  c.amount
  
2.Processing: 
  a.share = percent * total sale
  b.end + share + year
    
3.Output:
  a.total amount gerenated
*/

#include <iostream>
using namespace std;

int main()
{
	double percent = 0.62;
	double sales = 4600000;
	double generateAmount; 

	generateAmount = percent * sales;

	cout << "amount" << (percent * 100) << endl; 
	cout << "amount" << (generateAmount) << endl;

	system("pause");
	return 0;
}
