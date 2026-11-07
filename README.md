# cis165-lab7
# CIS-165 Lab 7: BMI and Color Mixer

## Program 1 plan: BMI (`bmi.cpp`)

- **Inputs:** Weight in pounds and height in inches.
- **Variables:** `weight_pounds`, `height_inches`, and `bmi` are `double` variables.
- **Named constants:** `BMI_CONVERSION_FACTOR` is `703.0`, `UNDERWEIGHT_LIMIT` is `18.5`, and `OPTIMAL_WEIGHT_LIMIT` is `25.0`.
- **Validation:** Before calculating BMI, check whether either input is less than or equal to zero. Print an error and end the program if either value is invalid.
- **Calculation:** Calculate `weight_pounds * BMI_CONVERSION_FACTOR / (height_inches * height_inches)` and store the answer in `bmi`.
- **Output:** Display BMI with two digits after the decimal, then display Underweight, Optimal weight, or Overweight. Use the unrounded `bmi` variable for the category decision.

## Program 2 plan: Color Mixer (`color_mixer.cpp`)

- **Inputs:** Two lowercase primary-color names: `red`, `blue`, or `yellow`.
- **Variables:** `first_color` and `second_color` are character arrays. `mixed_color` stores the result to display. `first_valid` and `second_valid` record whether each input is a valid primary color.
- **Named constant:** `COLOR_SIZE` sets each character array's capacity. `setw(COLOR_SIZE)` limits each input so there is room for the null terminator.
- **Validation and comparisons:** Use `strcmp` to check each input against all three valid color names. Print an error if either input is invalid. Compare the two arrays with `strcmp`, not `==`.
- **Result:** If both valid inputs match, use the first color as the result. Otherwise, check each pair in both possible orders and select purple, orange, or green.
- **Output:** Display the mixed color or an error message.

## Test records

The expected results below are predictions to check against your program. Run each test separately. After running it on your Mac, replace each **Pending local run** entry with what your program actually printed and record whether it matched. If it did not match, explain the correction you made and rerun the test.

### BMI tests

| Program/test | Inputs (weight, height) | Expected result | Actual result | Match or correction |
|---|---|---|---|---|
| BMI 1 | 100, 70 | 14.35 — Underweight | Pending local run | Pending |
| BMI 2 | 150, 70 | 21.52 — Optimal weight | Pending local run | Pending |
| BMI 3 | 200, 70 | 28.69 — Overweight | Pending local run | Pending |
| BMI 4 | 150, 0 | Error: weight and height must be positive. | Pending local run | Pending |
| BMI 5 | -150, 70 | Error: weight and height must be positive. | Pending local run | Pending |
| BMI extra 1 | 128.94736842105263, 70 | 18.50 — Optimal weight (checks the lower boundary) | Pending local run | Pending |
| BMI extra 2 | 174.25320056899005, 70 | 25.00 — Optimal weight (checks the upper boundary) | Pending local run | Pending |

### Color Mixer tests

| Program/test | Inputs (first, second) | Expected result | Actual result | Match or correction |
|---|---|---|---|---|
| Color 1 | red, blue | purple | Pending local run | Pending |
| Color 2 | red, yellow | orange | Pending local run | Pending |
| Color 3 | blue, yellow | green | Pending local run | Pending |
| Color 4 | blue, red | purple | Pending local run | Pending |
| Color 5 | yellow, red | orange | Pending local run | Pending |
| Color 6 | yellow, blue | green | Pending local run | Pending |
| Color 7 | red, red | red | Pending local run | Pending |
| Color 8 | blue, blue | blue | Pending local run | Pending |
| Color 9 | yellow, yellow | yellow | Pending local run | Pending |
| Color 10 | orange, blue | Error: enter red, blue, or yellow. | Pending local run | Pending |
| Color 11 | red, orange | Error: enter red, blue, or yellow. | Pending local run | Pending |
| Color extra 1 | purple, green | Error: enter red, blue, or yellow. (checks invalid input in both positions) | Pending local run | Pending |

## Explanation questions

1. **How does the BMI formula use pounds and inches? Why is `height * height` needed?** The formula multiplies weight in pounds by 703 and divides by height in inches multiplied by itself. Height is squared, so `height * height` gives the height-squared value required by the BMI formula. In C++, `^` is not the exponent operator.

2. **How do the conditions handle exactly 18.5 and exactly 25.0? Does the order matter?** The first condition checks whether BMI is below 18.5. The next condition checks whether BMI is less than or equal to 25.0. Because the first condition already removed values below 18.5, the second condition covers 18.5 through 25.0, including both endpoints. The final `else` covers values greater than 25.0. The order matters because the conditions are checked from top to bottom.

3. **Why check weight and height before calculating BMI?** Both inputs must be positive for this exercise. Checking first prevents division by zero and prevents a negative or zero measurement from being used in the calculation.

4. **Why classify the unrounded BMI and round only its displayed value?** Rounding is only for readable output. A value close to a category boundary could display as 18.50 or 25.00 after rounding even though its stored value is slightly below or above that boundary. Using the original value keeps the category decision accurate under the assignment's rules.

5. **What does `strcmp` return for equal text? Why is `==` not correct for character-array contents?** `strcmp` returns 0 when the character sequences match. Using `==` with character arrays compares their memory addresses rather than comparing the text stored in the arrays.

6. **How does each mixture work in either input order, and how are identical colors handled?** Each different-color condition checks both orders, such as red then blue and blue then red. Before checking mixtures, the program checks whether the two valid inputs match; when they do, the result is the first color.

7. **How are invalid colors checked in either position?** The program separately checks the first and second arrays against red, blue, and yellow. If either validity check is false, it prints the error message and stops before selecting a result.

8. **How do named constants and result variables help?** Named constants give important values clear names and make them easier to find or change. Result variables store calculations or selected results before they are displayed, making the program easier to read, test, and check.

## Compile and run on macOS

Open Terminal in this repository folder and compile and run each program separately:

```bash
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi

g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer
```

Enter one test case per run. Record your prediction before running each case, then fill in the actual-result and match/correction columns above. After making any correction, compile and rerun the affected tests and both final programs. The repository should contain `bmi.cpp`, `color_mixer.cpp`, `README.md`, and `AI_REFLECTION.md` at its top level.
