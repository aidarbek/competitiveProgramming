#include <iostream.h>
int main () {
int a,b,c;
cin>>a>>b>>c;
if ((a>b)&&(a>c))
cout<<a;
if ((b>a)&&(b>c))
cout<<b;
if ((c>b)&&(c>a))
cout<<c;
return 0;

}
