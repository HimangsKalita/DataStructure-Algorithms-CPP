## XOR

### Truth table

- 0 ^ 0 = 0
- 0 ^ 1 = 1
- 1 ^ 0 = 1
- 1 ^ 1 = 0

Properties

1. XOR of two same number is 0:`a ^ a = 0`
2. Any number XOR 0 is equal to the same number: `a ^ 0 = a`
3. XOR has associative property: `a1^(a2^a3) == (a1^a2)^a3`

> common usage is to find a single element in array where all elements have frequenecy of 2, find the element which do not have a duplicate


## Left shift 

`a << b = a.2^b`
- This happens due as the bits are shifted one position left and every positition in left in binary to digital is raise power with 2.
- ex- Left shift of 1\
  11 << 1\
  1011 << 1 -> 10110 extra 0 zero added at last to fill it\
  10110 = 22\
  1011 << 2 -> 101100 extra two 0 are added at last\
  101100 = 44

## Right shift 

`a >> b = a / 2^b`
- This happens due as the bits are shifted one position right and every positition we shift right in binary it looses its power(value) as we raise power with 2.
- ex- Right shift of 1\
  11 >> 1\
  1011 >> 1 -> 101 last element was removed as we cannot right the last element as no index of -1 negatives thus power(value) of bits decreased by 2^b/
  101 = 5 (11/2 = 5.5 -> 5 (int floor value))

  1011 >> 2 -> 10 extra two elements removed\
  10 = 2 (11/2^2 = 11 / 4 = 2.75 -> 2(int floor value))
