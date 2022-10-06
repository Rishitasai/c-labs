include <iostream>
using namespace std;
int main()

{
            int num= 0;
            int sum=0;
            int pos=0;
            int neg=0;
            double ave=0;
            cout << "Enter an integer, the input ends if it is 0: " ;
            cin >> num ;
            if (num%10==10) {
                while (num!=0) {
                    num/=10;
                    if (num%10>0) {
                        pos++;
                    }
            else if (num%10<0) {
                neg++;
            }
            sum+=num;
                }
            ave= (double)sum/(pos+neg);
            }
            cout <<"The number of positives are " << pos <<endl;
            cout <<"The number of negatives are " << neg <<endl;
            cout <<"The total is " << sum << endl;
            cout <<"The average is "<< ave << endl;
            return 0;

 }
