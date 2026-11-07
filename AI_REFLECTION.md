# AI Reflection

I used ChatGPT to help organize the requirements for Lab 7, plan the two programs, 
and explain C++ selection statements and character-array comparisons. 
I reviewed the suggestions against the assignment instructions 
because I am responsible for understanding and checking the code I submit.

One programming decision was to validate both color inputs before trying to mix them. 
I used `strcmp` to compare each character array with the three allowed color names,
and I checked both orders for every different-color pair. For the BMI program, I used an `if`, `else if`, and `else` sequence so the lower and upper limits are handled 
without leaving a gap. I also kept the BMI calculation in a `double` result variable and used formatting only when displaying it.

To check my work, I will compile both files with the required C++17 command and run the test cases in the README. 
**Before submitting, replace this sentence with your actual compiler result and at least one specific expected-versus-actual test comparison from your own Mac.**

I can now explain how the BMI conditions divide the three categories and 
why `strcmp` is used for character-array text. 
I still need practice tracing nested conditions and 
checking boundary values without overlooking an endpoint.
