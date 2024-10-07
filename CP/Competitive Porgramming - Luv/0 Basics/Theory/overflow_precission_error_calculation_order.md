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

	cout<<c<<endl;

	return 0;
}
```

__Output__

```
1410065408
```