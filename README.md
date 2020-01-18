# sequential_multiplier_16_bit
Multiplication of two16 bit numbers using 16 bit sequential Multiplier

# Programming Language and IDE Used

C Programming Language, Code Blocks IDE

# Theory

Sequential Multiplier is based on the concept "Add and Shift". This is similar to normal Multiplication.

# Sequential Multiplier Algorithm

* Initialization :- Load Multiplicand in "M" register, Multiplier in "Q"register - Initialize "C" and "A" registers to all zeroes.

* Repeat the following steps "n" times, where "n" is the number of bits in the Multiplier-If(LSB of Q register == 1)A = A+M (carry-out goes to "C" register) - Treat the C, A and Q registers as one contiguous register and shift thet register's contents right by one bit position.

* After the completion of "n" steps - Register "A" contains high-order half of product - Register "Q" contains low-order half of product.

# Sequential Multiplication Example

To be uploaded...

# Circuit Diagram

To be uploaded...

# Example Result

To be uploaded...
