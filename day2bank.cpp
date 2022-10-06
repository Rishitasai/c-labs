#include<iostream.h>
#include<conio.h>
class counter
{
int count;
public:
counter()
{
count=0;
}
counter operator++(int)
{
count++;
}
int get_count()
{
return count;
}


counter operator--(int)
{
count--;
}
};
void main()
{
clrscr();
counter c1;
cout<<"Initial No Of People "<<c1.get_count()<<endl;
c1++;
c1++;
c1++;
cout<<"Present No Of People "<<c1.get_count()<<endl;
c1--;
c1--;
cout<<"Present No Of People "<<c1.get_count()<<endl;
getch();


}
