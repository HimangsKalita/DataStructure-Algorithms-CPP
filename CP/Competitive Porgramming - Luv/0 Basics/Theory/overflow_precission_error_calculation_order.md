# Notes 

## Calculation Order in Datatypes 

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	cout<<7/2<<endl;
	cout<<7/2.0;

	return 0;
}
```

__Output__
```
3
3.5
```

### 1. Calculation precedence 

- Double > Float > Long Long Int > Long Int > Int> Characters

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	cout<<'c' + 1;

	return 0;
}
```

__Output__
```
100
```


### 2. First calculation then store

- Calculation will be done first in the format of the operands with calculation precedence, then the value will be stored to the variable in the format of the variable.

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	int a = 3/2;
	int b = 3/2.0;

	double c = 3/2;
	double d = 3/2.0;
	
	cout<<a<<" "<<b<<endl;
	cout<<c<<" "<<d;

	return 0;
}
```

__Output__
```
1 1
1 1.5
```


### 3 Operator Precedence 

__Table__

|	Category	|	Operator			|	Associativity	|
|--------------|-----------------------|------------------|
|Postfix|() [] -> . ++ - -|Left to right|
|Unary |+ - ! ~ ++ - - (type)* & sizeof 	|Right to left|
|Multiplicative|* / % |	Left to right|
|Additive 	|+ - |	Left to right|
|Shift 	|<< >> |	Left to right|
|Relational|< <= > >= |	Left to right|
|Equality 	|== != |	Left to right|
|Bitwise AND |& 	|Left to right|
|Bitwise XOR |^ 	|Left to right|
|Bitwise OR |`|` |	Left to right|
|Logical AND |&& |	Left to right|
|Logical OR |`||` |	Left to right|
|Conditional |?: |	Right to left|
|Assignment |= += -= *= /= %=>>= <<= &= ^= `|`=		|Right to left|
|Comma 	|, 	|Left to right|

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	cout<<7/2*3<<endl;
	// output will be wrong in the BODMAS format 
	// But Right in the left to right Operator Precedence format 
	cout<<3*7/2;

	return 0;
}
```

__Output__
```
9
10
```

### 4. Overflow

| Data Type |		Range		|
|-----------|------------------|
| Int		| -10^9 < Int < 10^9 |
| Long Int	| -10^12 < Long Int < 10^12 |
| Long Long Int|	-10^18 < Long Long Int < 10^18 |

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	int a = 100000;
	int b = 100000;
	int c = a*b;

	// c is int limit 10^9 but 10^5 * 10^5 = 10^10
	cout<<"c = a*b: "<<c<<endl;

	int max = INT_MAX;
	cout<<"INT_MAX = "<<max<<endl;


	// OVerlfow  -10^9 <int< 10^9 
	// 10^9 -> +1 -> -10^9
	int max2 = INT_MAX;
	cout<<"INT_MAX+1 = "<<max2+1<<endl;

	long int d = 100000;
	long int e = 100000;
	long int f = d * e;
	cout<<"d*e = "<<f<<endl;

	// wrong value because first calculate then store
	// calculation in operands format is int resulting in overflow
	int g = 100000;
	int h = 100000;
	long int i = g * h;
	cout<<"g*h = "<<i<<endl;

	// 1LL = Long Long Int converting the equation to Long Long Int format
	i = g * 1LL * h;
	cout<<"g*1LL*h = "<<i<<endl;


	return 0;
}
```

__Output__

```
c = a*b: 1410065408
INT_MAX = 2147483647
INT_MAX+1 = -2147483648
d*e = 10000000000
g*h = 1410065408
g*1LL*h = 10000000000

```

### 5. Precision Error in Double and Float

- Number will be close to number but not exactly the number
- Because of limited storage
- Big number will be stored w.r.t the cost of accuracy
- Online contest error for accurate number

```
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	double a = 100000;
	double b = 100000;
	double c = a * b;

	cout<<"c = a * b : "<<fixed<<setprecision(0)<<c<<endl;

	c = 1e24;

	cout<<"c = 1e24  : "<<fixed<<setprecision(0)<<c<<endl;


	return 0;
}
```

__Output__
```
c = a * b : 10000000000
c = 1e24  : 999999999999999983222784

```